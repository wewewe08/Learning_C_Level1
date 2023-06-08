#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0;
	int index, total_len;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	total_len = dest_len + src_len;
	src_len = 0;

	for (index = dest_len; index < total_len; index++)
	{
		dest[index] = src[src_len];
		src_len++;
	}

	dest[index] = '\0';

	return (dest);
}
