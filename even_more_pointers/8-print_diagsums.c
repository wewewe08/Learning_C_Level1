#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int row, col, sum = 0;

	for (row = 0; row < size; row++)
	{
		int curr_col = 0;
		for (col = 0; col < size; col++)
		{
			if (col == curr_col)
			{
				sum += a[row];
			}
		}
	}

	printf("%d", sum);
}
