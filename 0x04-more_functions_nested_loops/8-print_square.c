#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: input size of square
 * Return: void
 */

void print_square(int size)
{
	int i, j;
	int n = size;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

