#include <stdio.h>

/**
 * main - The FizzBuzz Test
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (i % 3 == 0)
				printf("Fizz ");
			else if (i % 5 == 0)
				printf("Buzz ");
			else
				printf("%d ", i);
		}
		else
			printf("Buzz");
	}
	putchar(10);

	return (0);
}
