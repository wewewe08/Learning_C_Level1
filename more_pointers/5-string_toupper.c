#include <stdio.h>

char *string_toupper(char *c)
{
	int index;

	for (index = 0; c[index] != '\0'; index++)
	{
		if (c[index] >= 'a' && c[index] <= 'z')
		{
			c[index] = c[index] - 32; /* uppercase letter */
		}
		else
		{
			continue;
		}
	}

	return (c);
}
