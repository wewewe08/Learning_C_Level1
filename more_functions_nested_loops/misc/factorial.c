#include <stdio.h>

int calculate_factorial(int num)
{
	int index, factorial = 1;
	for (index = 1; index <= num; index++)
	{
		factorial *= index;
	}
	return factorial;
}

int main(void)
{
	int num, factorial;

	printf("Enter a number: \n");
	scanf("%d", &num);

	factorial = calculate_factorial(num);
	printf("The factorial of %d is %d\n", num, factorial);

	return (0);
}
