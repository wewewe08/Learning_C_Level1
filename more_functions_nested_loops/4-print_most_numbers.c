#include "main.h"

/**
 * print_most_numbers - entry point
 * Return: void
 */

void print_most_numbers(void)
{
	int start_num;

	for (start_num = 0; start_num <= 9; start_num++)
	{
		if (start_num == 2 || start_num == 4)
		{
			continue;
		}
		_putchar('0' + start_num);
	}
	_putchar('\n');
}
