#include "main.h"

/**
 * print_rev - entry point
 * @*s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int count, index;

	/* get length of string */
	while (*s != '\0')
	{
		count++;
		s++; /* moves to next address in memory and also sets s to the last char value to reverse */
	}

	s--;

	for (index = 0; index < count; index++)
	{
		char c = *s; /* this will be set to the last char value bcus of loop from above */
		_putchar(c);
		s--; /* moving backwards now since we starting from the last letter */
	}
	_putchar('\n');
}
