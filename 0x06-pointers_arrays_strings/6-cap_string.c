#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *		    separators of words spaces, tabulations, commas
 *		    ,, ;, ., !, ?, ", (, ), {, and }
 *  @s: string to be capitalized
 *
 *  Return: pointer to the sing
 */

char *cap_string(char *s)
{
	int i = 0, flag = 1;

	for (; *(s + i) != '\0'; i++)
	{
		if (
				s[i] == 32 || s[i] == 9 || s[i] == 10 ||
				s[i] == 44 || s[i] == 59 || s[i] == 46 ||
				s[i] == 33 || s[i] == 63 || s[i] == '"' ||
				s[i] == 40 || s[i] == 41 ||
				s[i] == 123 || s[i] == 125
			)

			flag = 1;
		else if (flag)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';

			flag = 0;
		}
	}

	return (s);
}
