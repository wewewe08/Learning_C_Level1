#include "main.h"

/**
 * print_line - entry point
 * @n: nubmer of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int start_num;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (start_num = 0; start_num < n; start_num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
