#include <stdio.h>

char *leet(char *c)
{
	int count, index;
	
	/* these arrays are for cross referencing each other since they will use the same index */
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4','3','0','7','1'};

	for (count = 0; c[count] != '\0'; count++)
	{
		/* getting the index for both arrays since they both have length of 5 */
		for (index = 0; index < 5; index++)
		{
			/* check if the string has the specified lowercase letter or uppercase letter */
			if (c[count] == letters[index] || c[count] == letters[index] - 32)
			{
				c[count] = numbers[index]; /* set that element to the number in the numbers array */
			}
		}
	}
	return (c);
}
