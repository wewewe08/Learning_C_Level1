#include <stdio.h>

void reverse_array(int *a, int n)
{
	int front, end;

	for (front = 0, end = n - 1; front < n / 2; front++, end--)
	{
		int curr_num = a[front];

		a[front] = a[end];
		a[end] = curr_num;
	}
}
