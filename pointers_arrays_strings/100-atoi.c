#include "main.h"

/**
 * _atoi - entry point
 * @*s: string to be converted to number
 * Return: int
 */

int _atoi(char *s)
{
	int index, result = 0, sign = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		/* check if character is a number */
		if (s[index] >= 48 && s[index] <= 57)
		{
			/* result * 10 is to shift the numbers down one place
			 * ex/ '98' -> (0 * 10) + ('9' - '0') = 9
			 * the ascii value of 9 minus ascii value of 0 = the integer 9
			 * next number is 8 -> (9 * 10) + ('8' - '0') = 90 + 8 = 98
			 */
			result = (result * 10) + (s[index] - '0');
			
			/* checking if the previous character was a '-' for negative numbers */
			if (s[index - 1] == '-')
			{
				sign = -1;
			}
		}
	}

	if (sign != 0)
	{
		result = result * sign;
	}
	return (result);
}
