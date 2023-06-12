#include <stdio.h>

char *leet(char *c)
{
	int count, index;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4','3','0','7','1'};

	for (count = 0; c[count] != '\0'; count++)
	{
		for (index = 0; index < 5; index++)
		{
			if (c[count] == letters[index] || c[count] == letters[index] - 32)
			{
				c[count] = numbers[index];
			}
		}
	}
	return (c);
}
