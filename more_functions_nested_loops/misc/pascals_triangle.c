#include <stdio.h>

void print_pascal(int num)
{
	int line, index;

	for (line = 1; line <= num; line++)
	{
		int C = 1; /* C(line, index) */
		for (index = 1; index <= line; index++)
		{
			printf("%d ", C);
			C = C * (line - index) / index;
		}
		printf("\n");
	}
}

int main(void)
{
	int num = 5;
	print_pascal(num);

	return (0);
}
