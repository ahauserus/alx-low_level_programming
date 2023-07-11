#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"


/**
 * argc - count the number of arguments passed
 * @str: arguments passed
 *
 * Return: number of arguments
 */

int argc(char *str)
{
	int i = 0, args = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			args++;
			i += _strlen(str + i);
		}
	}

	return (args);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: NULL if str == NULL or str == "", otherwise
 *		a pointer to the newly allocated space in memory
 */

char **strtow(char *str)
{
	char **string;
	int i = 0, words, chr, l, w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = argc(str);

	string = malloc(words + 1);
	if (string == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		chr = _strlen(str + i);
		string[w] = malloc(chr + 1);

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}

		for (l = 0; l < chr; l++)
			string[w][l] = str[i++];

		string[w][l] = '\0';
	}

	string[w] = NULL;

	return (string);
}
