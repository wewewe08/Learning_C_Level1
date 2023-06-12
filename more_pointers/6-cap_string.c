#include <stdio.h>

char *cap_string(char *c)
{
	int string_index, arr_index, arr_len = 13;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/* looping over string */
	for (string_index = 0; c[string_index] != '\0'; string_index++)
	{
		/* checks to see if the first character in the string is a lower case letter */
		if (c[string_index] >= 'a' && c[string_index] <= 'z' && string_index == 0)
		{
			c[string_index] -= 32;
			continue;
		}

		/* loop over the array of separators */
		for (arr_index = 0; arr_index < arr_len; arr_index++)
		{
			/* if the separator is present in the string */
			if (separators[arr_index] == c[string_index])
			{
				/* check if the next character is a lowercase letter */
				if (c[string_index + 1] >= 'a' && c[string_index + 1] <= 'z')
				{
					c[string_index + 1] -= 32; /* set the letter to upper case */
					break; /* no need to check the rest of the array for this char, so break and move to next char in the string */
				}
				
			}
		}
	}

	return (c);
}
