#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	char start_letter, end_letter, letter;
	int iteration;

	iteration = 1;
	start_letter = 'a';
	end_letter = 'z';

	letter = start_letter;

	while (iteration <= 10)
	{
		while (letter <= end_letter)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		iteration++;
		letter = start_letter;
	}
}
