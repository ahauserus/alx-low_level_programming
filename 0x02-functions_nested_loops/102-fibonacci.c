#include <stdio.h>


/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */


int main(void)
{
	int i;
	unsigned long current = 0, next = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = current + next;
		printf("%lu", sum);

		if (i != 49)
			printf(", ");
		current = next;
		next = sum;
	}
	printf("\n");

	return (0);
}
