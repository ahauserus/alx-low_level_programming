#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks whether the last digit of a number is positive or negative.
 * Return: Always 0. Otherwsie 1.
 */

int main(void)
{
	int n, lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;


	if (n > 0 && lst > 0)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	else if (n < 0 && lst < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	else
		printf("Last digit of %d is %d and is 0\n", n, lst);

	return (0);
}
