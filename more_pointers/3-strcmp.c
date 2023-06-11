#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int s1_index = 0, s2_index;

	for (s2_index = 0; s2[s2_index] != '\0'; s2_index++)
	{
		if (s1[s1_index] != s2[s2_index])
		{
			return (s1[s1_index] - s2[s2_index]); /* gets difference between the two char ASCII values */
		}

		/* stops s1_index at the terminating character while continuing s2_index */
		if (s1[s1_index] != '\0')
		{
			s1_index++;
		}
	}

	return (0);
}
