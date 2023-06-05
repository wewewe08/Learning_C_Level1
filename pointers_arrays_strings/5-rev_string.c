#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - entry point
 * @*s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	/*
	 * *start_char and *end_char are the pointers so we can swap the letters
	 * curr_char is to hold a character to swap (look back at how we swapped two integers using pointers)
	 */
	char *start_char, *end_char, curr_char;
	int count = 0, index;

	/* initialize both pointers to the same address as *s */
	start_char = s;
	end_char = s;

	/* get length of the string while also moving *end_char to '\0' which is the last character in a string */
	while (s[count] != '\0')
	{
		end_char++;
		count++;
	}

	end_char--; /* this is to readjust it to the last readable character */ 

	for (index = 0; index < count / 2; index++) /* count/2 is because youre going to be swapping from both ends so the amount of iterations are cut in half */
	{
		curr_char = *end_char; /* again, referring to the swapping integers problem, this is to hold the last char */
		*end_char = *start_char; /* set the ending character to the first character */
		*start_char = curr_char; /* set the first character to the ending character we were holding in curr_char */

		start_char++; /* move to the next letter */
		end_char--; /* move to the next letter */
	}
}
