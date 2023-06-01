#include "main.h"

/**
 * more_numbers - entry point
 * Return: void
 */

void more_numbers(void)
{
	int iteration, start_num;

	for (iteration = 0; iteration < 10; iteration++)
	{
		for (start_num = 0; start_num <= 14; start_num++)
		{
			if (start_num > 9)
			{
				_putchar('0' + (start_num / 10));
				_putchar('0' + (start_num % 10));
				continue;
			}
			_putchar('0' + start_num);
		}
		_putchar('\n');
	}
}
