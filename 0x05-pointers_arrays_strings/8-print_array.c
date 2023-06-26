#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n == 1)
		printf("%d\n", *(a + i));

	while (i !=  n - 1)
	{
		printf("%d, ", *(a + i));
		i++;
	}

	printf("%d\n", *(a + i));
}
