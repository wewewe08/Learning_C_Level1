#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	char s3[] = "Hello, World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	printf("%d\n", _strcmp(s1, s3));
	return (0);
}
