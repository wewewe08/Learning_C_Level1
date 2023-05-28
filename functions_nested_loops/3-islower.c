#include "main.h"

/**
 * _islower - entry point
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 &&  c <= 127) /* 97 = 'a' and 127 = 'z' */
	{
		/* is lower case */
		return (1);
	}
	return (0);
}
