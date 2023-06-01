#include <stdio.h>

/**
 * _isdigit - entry point
 * @c: char to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return 1;
	}
	return 0;
}
