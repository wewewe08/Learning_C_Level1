#include <stdio.h>
#include "main.h"

int main(void)
{
	int num1, num2, num3, num4;

	printf("Enter 4 numbers separated by spaces: ");
	scanf("%d %d %d %d", num1, num2, num3, num4);

	max_num(num1, num2, num3, num4);
	return(0);
}
