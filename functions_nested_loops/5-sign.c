#include "main.h"

/**
 * print_sign - entry point
 * @n: integer value
 *
 * Description: check for integer sign
 *
 * Return: 1, 0, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		/* positive number */
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		/* is zero */
		_putchar('0');
		return (0);
	}
	else
	{
		/* negative number */
		_putchar('-');
		return (-1);
	}
}
