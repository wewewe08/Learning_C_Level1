#include "main.h"

/**
 * puts_half - entry point
 * @*str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int counter = 0, index;

	while (str[counter] != '\0')
	{
		counter++;
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		char ch = str[index];

		if (counter % 2 == 1) /* checks for odd number of total characters */
		{
			if (index <= ((counter - 1) / 2)) /* ignoring first half */
			{
				continue;
			}
		}
		else if (index < (counter / 2)) /* even number of total characters, ignoring first half */
		{
			continue;
		}
		_putchar(ch);
	}
	_putchar('\n');
}
