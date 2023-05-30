#include <stdio.h>

int compare_num(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}

	return num2;
}

void max_num(int num1, int num2, int num3, int num4)
{
	int largest_num = compare_num(compare_num(num1, num2), compare_num(num3, num4));
	printf("Given the numbers: %d, %d, %d, and %d...\n", num1, num2, num3, num4);
	printf("The largest number is: %d\n", largest_num);
}
