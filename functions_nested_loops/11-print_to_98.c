#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: number to start from
 *
 * Description: print all natural numbers up to 98
 * Return: void
 */

void print_to_98(int n)
{
	while(n <= 98 || n >= 98)
	{
		printf("%d", n);
		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
		else /* equals 98 */
		{
			break;
		}

		printf(", ");
	}
	putchar('\n');
}
