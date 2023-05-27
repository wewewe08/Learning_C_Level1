#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: always 0 (Success)
 */

int main(void)
{
	int start_num, end_num;
	int num1, num2;

	start_num = 0;
	end_num = 9;

	num1 = start_num;
	num2 = start_num;

	while (num1 < end_num)
	{
		while (num2 < end_num)
		{
			putchar('0' + num1);
			putchar('1' + num2);
			if (num1 == 8)
			{
				num2++;
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		start_num++;
		num2 = start_num;
	}

	putchar('\n');
	return (0);
}
