#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers form 0 to 99
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
