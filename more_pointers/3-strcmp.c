#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int index1, index2;

	for (index1 = 0, index2 = 0; s1[index1] != '\0' && s2[index2] != '\0'; index1++, index2++)
	{
		if (s1[index1] != s2[index2])
		{
			return (s1[index1] - s2[index2]);
		}
	}

	return (0);
}
