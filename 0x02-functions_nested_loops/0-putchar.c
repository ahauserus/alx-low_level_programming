#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";
	int i = 0;

	do {
		_putchar(str[i]);
		i++;
	} while (str[i] != '\0');

	_putchar(10);

	return (0);
}
