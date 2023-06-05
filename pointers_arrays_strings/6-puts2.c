#include "main.h"

/**
 * puts2 - entry point
 * @*str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		char ch = str[index];
		if (index % 2 == 1)
		{
			continue;
		}

		_putchar(ch);
	}
	_putchar('\n');
}
