#include <stdio.h>


/**
 * main - prints the sum of the even-valued terms of the fibonacci
 *	    whose values do not exceed 4,000,000,
 *
 * Return: Always 0
 */


int main(void)
{
	unsigned long current = 0, next = 1, sum = 0, fin_sum = 0;

	while (1)
	{
		sum = current + next;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			fin_sum += sum;
		current = next;
		next = sum;
	}

	printf("%lu\n", fin_sum);

	return (0);
}
