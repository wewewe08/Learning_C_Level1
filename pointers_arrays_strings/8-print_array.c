#include <stdio.h>

/**
 * print_array - entry point
 * @*a: pointer to array
 * @n: array size
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		int num = a[index];
		
		if (index == n - 1) /* the last number to be printed */
		{
			printf("%d", num);
			break;
		}

		printf("%d, ", num);
	}
	printf("\n");
}
