#include "main.h"

/**
 * print_triangle - entry point
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int iteration, index, spaces;

	for (iteration = 0; iteration < size; iteration++)
	{
		for (spaces = size - 1; spaces > iteration; spaces--)
		{
			_putchar(' ');
		}

		for (index = 0; index <= iteration; index++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
