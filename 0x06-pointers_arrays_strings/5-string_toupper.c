#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to the string in upper case
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
