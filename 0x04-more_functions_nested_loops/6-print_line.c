#include "main.h"

/**
 * print_line - prints a line
 * @n: size of the line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}
