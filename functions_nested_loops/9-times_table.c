#include "main.h"

/**
 * times_table - entry point
 * Description: Print times table
 * Return: void
 */

void print_zero()
{
	_putchar('0' + 0);
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

void print_single_digit(int n, int last)
{
	_putchar('0' + n);

	if (n == last)
	{
		return;
	}

	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

void print_double_digit(int n, int last)
{
	int first_digit, second_digit;
	first_digit = n / 10;
	second_digit = n % 10;

	_putchar('0' + first_digit);
	_putchar('0' + second_digit);

	if (n == last)
	{
		return;
	}

	_putchar(',');
	_putchar(' ');
}

void times_table(void)
{
	int multiple_num, last_num, iteration;
	multiple_num = 1;
	iteration = 1;

	while (iteration <= 11)
	{
		if (iteration == 10)
		{
			_putchar('0' + 0);
			break;
		}

		print_zero();
		iteration++;
	}

	iteration = 1;
	_putchar('\n');

	while (iteration <= 9)
	{
		last_num = multiple_num * 9;

		print_zero();
		while (multiple_num <= last_num)
		{
			if (multiple_num <= 9)
			{
				print_single_digit(multiple_num, last_num);
			}
			else if (multiple_num > 9)
			{
				print_double_digit(multiple_num, last_num);
			}
			else if (multiple_num == last_num)
			{
				if (multiple_num > 9)
				{
					print_double_digit(multiple_num, last_num);
				}
				else
				{
					print_single_digit(multiple_num, last_num);
				}
				break;
			}

			multiple_num += iteration;
		}
		_putchar('\n');
		iteration++;
		multiple_num = iteration;
	}
}
