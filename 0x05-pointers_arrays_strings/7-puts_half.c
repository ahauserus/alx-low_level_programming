#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0, len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
}


/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}
