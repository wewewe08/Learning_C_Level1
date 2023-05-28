#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always void
 */

void print_alphabet(void)
{
	char start_letter, end_letter, letter;
	start_letter = 'a';
	end_letter = 'z';
	
	letter = start_letter;

	while (letter <= end_letter)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
