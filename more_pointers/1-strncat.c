#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int dest_index, src_index, total_len, dest_len = 0, src_len = 0;

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	total_len = dest_len + n;

	for (dest_index = dest_len, src_index = 0; dest_index < total_len && src_index < src_len; dest_index++, src_index++)
	{
		dest[dest_index] = src[src_index];
	}

	dest[dest_index] = '\0';

	return (dest);
}
