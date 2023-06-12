#include <stdio.h>

char *cap_string(char *c)
{
	int count, count2, len = 13;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/* looping over string */
	for (count = 0; c[count] != '\0'; count++)
	{
		/* loop over the array of separators */
		for (count2 = 0; count2 < len; count2++)
		{
			/* if the separator is present in the string and the next char is a lower case letter */
			if (separators[count2] == c[count] && (c[count + 1] >= 'a' && c[count + 1] <= 'z'))
			{
				c[count + 1] -= 32; /* set the next char to upper case */
			}
		}
	}

	return (c);
}
