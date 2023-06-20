#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 (Success), 1 (Failure)
 */

int main(void)
{
	int i = 0, sum = 0;

	do {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	} while (i < 1024);

	printf("%d\n", sum);

	return (0);
}
