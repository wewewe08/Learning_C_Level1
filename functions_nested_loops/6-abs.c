#include "main.h"

/**
 * print_sign - entry point
 * @n: integer value
 *
 * Description: check for absolute value of integer
 *
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}	
	else
	{
		return (n * (-1));
	}
}
