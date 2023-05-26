#include <stdio.h>

/**
 * main - Entry point
 * Description: print all single digit numbers with commas and spaces
 * Return: always 0 (Success)
 */

int main(void)
{
	int start_num, end_num, num;
	start_num = 0;
	end_num = 9;

	num = start_num;

	while(num <= end_num)
	{
		putchar('0' + num);

		if (num == 9)
		{
			break;
		}

		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
