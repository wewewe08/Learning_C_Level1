#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int index, total_len, dest_len = 0, src_len = 0;

	/* getting the lenghts of each string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	total_len = dest_len + src_len; /* adding lengths together to get the length of concatenated string */

	/* add on src string starting from the terminating null byte of dest string */
	for (index = dest_len, src_len = 0; index < total_len; index++, src_len++)
	{
		dest[index] = src[src_len];
	}

	dest[index] = '\0'; /* add back terminating null byte */

	return (dest);
}
