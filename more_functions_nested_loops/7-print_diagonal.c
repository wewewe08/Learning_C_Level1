#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of times the \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int start_num, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (start_num = 0; start_num < n; start_num++)
		{
			for (spaces = 0; spaces < start_num; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
