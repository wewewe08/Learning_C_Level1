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

	if (counter % 2 == 1)
	{
		counter--;
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		char ch = str[index];

		if (index < (counter / 2)) /* first half of string */
		{
			continue;
		}
		_putchar(ch);
	}
	_putchar('\n');
}
