#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'q' and 'e'
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
