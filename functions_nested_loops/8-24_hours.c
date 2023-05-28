#include "main.h"

/**
 * jack_bauer - entry point
 * Return: void
 */

void jack_bauer(void)
{
	int first_minutes_num, second_minutes_num;
	int first_hours_num, second_hours_num;

	first_minutes_num = 0;
	second_minutes_num = 0;
	first_hours_num = 0;
	second_hours_num = 0;

	while (first_hours_num <= 2)
	{
		while (second_hours_num <= 3)
		{
			while (first_minutes_num <= 5)
			{
				while(second_minutes_num <= 9)
				{
					_putchar(first_hours_num + '0');
					_putchar(second_hours_num + '0');
					_putchar(':');
					_putchar(first_minutes_num + '0');
					_putchar(second_minutes_num + '0');
					_putchar('\n');
					second_minutes_num++;
				}
				second_minutes_num = 0;
				first_minutes_num++;
			}
			first_minutes_num = 0;
			second_hours_num++;
		}
		second_hours_num = 0;
		first_hours_num++;
	}	
}
