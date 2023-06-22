#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character should be printed
 */

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < row; col++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
}
