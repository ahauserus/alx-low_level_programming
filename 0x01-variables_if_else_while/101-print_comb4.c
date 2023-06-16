#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '8' || j != '9' || k != '9')
					putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
