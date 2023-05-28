#include "main.h"

/**
 * _isalpha - entry point
 * @c: integer value of ascii char
 *
 * Description: check for all letters
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 &&  c <= 127) || (c >= 65 && c <= 90)) /* 97 = 'a' and 127 = 'z' 65 = 'A' and 90 = 'Z' */
	{
		/* is lower case */
		return (1);
	}
	return (0);
}
