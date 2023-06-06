#include "main.h"

/**
 * _atoi - entry point
 * @*s: string to be converted to number
 * Return: int
 */

int _atoi(char *s)
{
	int index, result = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (str[index] ==
		result = result + s[index] - '0';
	}
	return (result);
}
