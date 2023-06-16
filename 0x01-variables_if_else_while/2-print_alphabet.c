#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
