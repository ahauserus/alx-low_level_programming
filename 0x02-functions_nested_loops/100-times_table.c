#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of times table to print
 */

void print_times_table(int n)
{
	int row, col;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int product = row * col;

			if (col == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(32);
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((product / 100) + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar(10);
	}
}
