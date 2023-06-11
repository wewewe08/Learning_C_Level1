#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
	}

	return (0);
}
