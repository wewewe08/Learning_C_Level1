#include "main.h"

/**
 * print_sign - entry point
 * @n: integer value
 *
 * Description: print last digit of integer
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int num;
	num = n % 10;

	if (num >= 0)
	{
		_putchar(num + '0');
		return (num);
	}

	num = num * -1;
	_putchar(num + '0');
	return (num);
}
