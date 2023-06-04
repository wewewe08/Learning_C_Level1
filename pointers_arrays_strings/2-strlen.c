#include "main.h"

/**
 * _strlen - entry point
 * @*s: char to input
 * Return: length of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++) /* \0 stands for end of string; NULL character */
	{
		s++;
	}

	return (count);
}
