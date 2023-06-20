#include <stdio.h>

/**
 * fib - Prints the Fibonacci sequence up to n
 * @n: The number of Fibonacci numbers
 *
 * Return: The fibonacci sequence
 */


int fib(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fib(n - 1) + fib(n - 2));
}

/**
 * main -checks fib
 *
 * Return: Always 0
 */


int main(void)
{
	int i;

	for (i = 1; i <= 56; i++)
		printf("%d, ", fib(i) - 1);

	printf("\n");
	return (0);
}
