#include <stdio.h>

/**
 * _isupper - entry point
 * @c: character to capitalize
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
