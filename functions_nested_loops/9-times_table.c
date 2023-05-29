#include "main.h"

/**
 * print_num - entry point
 * @n: integer to print
 * @increment: number increment
 * Description: prints num with comma and spaces
 * Return: void
 */

void print_num(int n, int multiple)
{
	_putchar('0' + n);
	_putchar(',');
	_putchar(' ');

	if (n + multiple > 9)
	{
		return;
	}

	_putchar(' ');
}

/**
 * print_double - entry point
 * @n: integer to print
 * @last: last multiple
 * Description: prints double digit numbers
 * Return: void
 */

void print_double(int n, int last)
{
	_putchar('0' + (n / 10)); /* first digit */
	_putchar('0' + (n % 10)); /* second digit */

	if (n == last)
	{
		return;
	}

	_putchar(',');
	_putchar(' ');
}

/**
 * times_table - entry point
 * Description: Print times table
 * Return: void
 */

void times_table(void)
{
	int multiple = 0, increment = 1;

	while (multiple <= 9) /* 1 - 9 */
	{
		int last_num = multiple * 9; /* last number in the sequence */
		
		print_num(0, 0);

		while (increment <= 9) /* multiply multiple by increment */
		{
			int curr_num = multiple * increment;
			
			if (curr_num > 9) /* if current multiple is a double digit  */
			{
				print_double(curr_num, last_num);
				increment++;
				continue;
			}

			if ((curr_num == last_num && curr_num != 0) || (increment == 9)) /* if it is last num or last 0 */
			{
				_putchar('0' + curr_num); /* only print number and not commas and spaces  */
				break;
			}
			print_num(curr_num, multiple);
			increment++;
		}
		_putchar('\n');
		increment = 1; /* reset increment */
		multiple++;
	}
}
