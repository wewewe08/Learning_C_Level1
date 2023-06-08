#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int index, total_len, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	total_len = dest_len + n;

	for (index = dest_len; index < total_len; index++, src_len++)
	{
		if (src_len >= n)
		{
			dest[index] = src[src_len];
		}
	}

	return (dest);
}
