#include <stdio.h>

char *cap_string(char *c)
{
	int string_index, arr_index, arr_len = 13;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/* looping over string */
	for (string_index = 0; c[string_index] != '\0'; string_index++)
	{
		/* loop over the array of separators */
		for (arr_index = 0; arr_index < arr_len; arr_index++)
		{
			/* if the separator is present in the string and the next char is a lower case letter */
			if (separators[arr_index] == c[string_index] && (c[string_index + 1] >= 'a' && c[string_index + 1] <= 'z'))
			{
				c[string_index + 1] -= 32; /* set the next char to upper case */
			}
		}
	}

	return (c);
}
