#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two two digit numbers
 * Return: always 0 (Success)
 */

int main(void)
{
	int start_num, end_num;
	int num1, num2, num3, num4;

	start_num = 0;
	end_num = 9;

	num1 = start_num; /* first digit of first double digit */
	num2 = start_num; /* second digit of first double digit */
	num3 = start_num; /* first digit of second double digit */
	num4 = start_num; /* second digit of second double digit */

	while (num1 <= end_num)
	{
		while (num2 <= end_num)
		{
			while (num3 <= end_num)
			{
				while (num4 < end_num)
				{

					putchar('0' + num1);
					putchar('0' + num2);
					putchar(' ');
					putchar('0' + num3);
					putchar('1' + num4);
					putchar(',');
					putchar(' ');

					num4++;
				}
				num3++;
				num4 = start_num;
			}
			num2++;
			num3 = start_num;
		}
		num1++;
		num2 = start_num;
	}

	putchar('\n');
	return (0);
}
