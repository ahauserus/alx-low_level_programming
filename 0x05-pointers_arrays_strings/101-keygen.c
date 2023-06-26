#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - bruteforce attack on the crackme program
 * Return: Always 0.
 */

int main(void)
{
	int i, c, t;

	for (c = 0, t = 2772; t > 122; c++)
	{
		i = (rand() % 125) + 1;
		printf("%c", i);
		t -= i;
	}
	printf("%c", t);

	return (0);
}
