#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != src[n]; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
