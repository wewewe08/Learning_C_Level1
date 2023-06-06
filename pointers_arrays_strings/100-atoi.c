#include "main.h"

/**
 * _atoi - entry point
 * @*s: string to be converted to number
 * Return: int
 */

int _atoi(char *s)
{
	int index, positive = 0, negative = 0;
	unsigned int result = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		/* counting amount of signs */
		if (s[index] == '+')
		{
			positive++;
		}
		else if (s[index] == '-')
		{
			negative++;
		}

		/* check if character is a number */
		if (s[index] >= '0' && s[index] <= '9')
		{
			/* result * 10 is to shift the numbers down one place
			 * s[index] - '0' subtracts the ascii values to get the actual integer
			 * ex/ '9' - '0' would be 57 - 48, which is 9 as an integer
			 */
			result = (result * 10) + (s[index] - '0');

			/* if the next char in the string is a non-integer, break out of loop */
			if (s[index + 1] < '0' || s[index + 1] > '9')
			{
				break;
			}
		}
	}

	/* multiply by -1 to make integer negative */
	if ((positive == 0 || positive > 0) && negative % 2 == 1)
	{
		result = result * -1;
	}
	return (result);
}
