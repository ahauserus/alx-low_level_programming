#include "main.h"
#include "2-strlen.c"
#include "memmove.c"

/**
 * infinite_add - adds two numbers and prints the result
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: the pointer to the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int i = 0, j = 0, k = 0, carry = 0, sum = 0, a, b;

	if (max_len > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = max_len;
	r[k + 1] = '\0';

	while (i >= 0 || j >= 0)
	{
		a = (i >= 0) ? n1[i] - '0' : 0;
		b = (j >= 0) ? n2[j] - '0' : 0;
		sum = a + b + carry;

		carry = sum / 10;
		r[k] = '0' + sum % 10;
		i--;
		j--;
		k--;
	}

	if (carry > 0)
	{
		if (max_len + 2 < size_r)
			return (0);
	}

	_memmove(r + 1, r, max_len + 1);
	r[0] = carry + '0';

	return (r);
}
