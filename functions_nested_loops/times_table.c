#include "main.h"

/**
 * print_zero - entry point
 * Description: prints num with comma and spaces
 * Return: void
 */

void print_num(int n)
{
	_putchar('0' + n);
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * times_table - entry point
 * Description: Print times table
 * Return: void
 */

void times_table(void)
{
	int multiple = 1, increment = 1, index = 0;

	while (index < 10)
	{
		if (index == 9)
		{
			_putchar('0' + 0);
			break;
		}

		print_num(0);
		index++;
	}
	_putchar('\n');

	while (multiple <= 9)
	{
		int last_num = multiple * 9;
		print_num(0);

		while(increment <= 9)
		{
			int curr_num = multiple * increment;
			if (curr_num > 9)
			{
				_putchar('0' + (curr_num / 10 )); /* first digit */
				_putchar('0' + (curr_num % 10)); /* second digit */
				
				if (curr_num == last_num)
				{
					break;
				}

				_putchar(',');
				_putchar(' ');
				increment++;
				continue;
			}

			if (curr_num == last_num)
			{
				_putchar('0' + curr_num);
				break;
			}
			
			print_num(curr_num);
			increment++;
		}
		_putchar('\n');
		increment = 1;
		multiple++;
	}
}
