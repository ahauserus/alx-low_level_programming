#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int pre = 1;
	unsigned int i = 0;

	while (*s++)
	{
		if (*s == '-')
			pre *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	}

	return (pre * i);
}
