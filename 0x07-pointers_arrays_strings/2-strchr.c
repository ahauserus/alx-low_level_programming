#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of c, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (s);
}
