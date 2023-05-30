#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char sentence[100];

	printf("Enter statement to be printed: \n");
	scanf("%[^\n]%*c", sentence);

	printf("%s\n", sentence);
	return (0);
}
