#include <stdio.h>

/**
 * main - Entry point
 * Description: printing alphabet
 * Return: always 0 (Success)
 */

int main(void)
{
	char start_letter, end_letter, letter;
	start_letter = 'a';
	end_letter = 'z';

	letter = start_letter;

	while (letter <=  end_letter)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');	
	return (0);
}
