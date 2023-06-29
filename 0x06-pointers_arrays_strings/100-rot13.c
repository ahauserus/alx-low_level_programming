#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char enc[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char dec[] = "nNpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (enc[j] == *(str + i))
			{
				*(str + i) = *(dec + j);
				break;
			}
		}
	}

	return (str);
}
