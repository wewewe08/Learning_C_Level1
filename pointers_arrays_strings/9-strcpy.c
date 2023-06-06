#include "main.h"

/**
 * strcpy - entry point
 * @*dest: destination string
 * @*src: the string to copy
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index + 1] = '\0';
	return (dest);
}
