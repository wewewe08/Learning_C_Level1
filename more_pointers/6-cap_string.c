#include <stdio.h>

char *cap_string(char *c)
{
	int count, count2, len = 13;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (count = 0; c[count] != '\0'; count++)
	{
		for (count2 = 0; count2 < len; count2++)
		{
			if (separators[count2] == c[count] && (c[count + 1] >= 'a' && c[count + 1] <= 'z'))
			{
				c[count + 1] -= 32;
			}
		}
	}

	return (c);
}
