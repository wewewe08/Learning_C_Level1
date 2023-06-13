#include <stdio.h>
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int row, col, len = 8;

	for (row = 0; row < len; row++)
	{
		for (col = 0; col < len; col++)
		{
			if ((a[row][col] >= 'a' && a[row][col] <= 'z') || (a[row][col] >= 'A' && a[row][col] <= 'Z'))
			{
				_putchar(a[row][col]);
			}
		}
		_putchar('\n');
	}
}
