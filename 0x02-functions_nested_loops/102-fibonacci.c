#include <stdio.h>

/**
 * fib - prints the first 50 fib numbers, starting with 1 and 2
 * @n: number of fib numbers to print
 *
 * Return: The first 50 fib numbers
 */

int fib(int n)
{
	if (n <= 1)
		return (n);

	return (fib(n - 1) + fib(n - 2));
}

/**
 * main - Checks fib
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 50, i, temp;

	temp = n + 1;

	for (i = 2; i <= temp; i++)
	{
		if (i != temp)
			printf("%d, ", fib(i));
		else
			printf("%d", fib(i));
	}

	putchar('\n');

	return (0);
}
