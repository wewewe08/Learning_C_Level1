#include "main.h"

/**
 * print_numbers - entry point
 * Return: void
 */

void print_numbers(void)
{
	int start_num;

	for (start_num = 0; start_num <= 9; start_num++)
	{
		_putchar('0' + start_num);
	}
	_putchar('\n');
}
