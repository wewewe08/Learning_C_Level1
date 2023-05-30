#include "main.h"

/**
 * times_table - entry point
 * Description: prints out 9 times table
 * Return: void
 */

void times_table(void)
{
	int multiple, increment;

	for (multiple = 0; multiple <= 9; multiple++)
	{
		for (increment = 0; increment <= 9; increment++)
		{
			int curr_num = multiple * increment;

			if (curr_num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (curr_num / 10));
				_putchar('0' + (curr_num % 10));
			}
			else if (curr_num <= 9)
			{
				if (increment != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + curr_num);
			}
		}
		_putchar('\n');
	}
}
