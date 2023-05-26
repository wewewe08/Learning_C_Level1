#include <stdio.h>

/**
 * main - Entry point
 * Description: print all base16 values
 * Return: always 0 (Success)
 */

int main(void)
{
	int start_num, end_num, num;
	char start_letter, end_letter, letter;

	start_num = 0;
	end_num = 9;
	num = start_num;

	start_letter = 'a';
	end_letter = 'f';
	letter = start_letter;

	while(num <= end_num)
	{
		putchar('0' + num);
		num++;
	}

	while(letter <= end_letter)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
