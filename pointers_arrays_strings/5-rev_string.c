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
	char *start_char, *end_char, curr_char;
	int count = 0, index;

	start_char = s;
	end_char = s;

	while (s[count] != '\0')
	{
		end_char++;
		count++;
	}

	end_char--;

	for (index = 0; index < count / 2; index++)
	{
		curr_char = *end_char;
		*end_char = *start_char;
		*start_char = curr_char;

		start_char++;
		end_char--;
	}
}
