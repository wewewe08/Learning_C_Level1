#include <stdio.h>

/**
 * main - Entry point
 * Description: printing alphabet in reverse
 * Return: always 0 (Success)
 */

int main(void)
{
	char start_letter, end_letter, letter;
	start_letter = 'z';
	end_letter = 'a';

	letter = start_letter;

	while (letter >=  end_letter)
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');	
	return (0);
}
