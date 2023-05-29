#include "main.h"

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
		_putchar('0' + 0);
		
		if (index == 9)
		{
			break;
		}

		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		index++;
	}

	_putchar('\n');

	while (multiple <= 9)
	{
		int last_num = multiple * 9;

		_putchar('0' + 0);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
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
			_putchar('0' + curr_num);
			if (curr_num == last_num)
			{
				break;
			}

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			increment++;
		}
		_putchar('\n');
		increment = 1;
		multiple++;
	}
}
