#include "main.h"

/**
 * _puts - entry point
 * @*str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; count++)
	{
		char ch = *str;
		_putchar(ch);
		str++;
	}
	_putchar('\n');
}
