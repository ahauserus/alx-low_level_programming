#include "main.h"

/**
 * _memmove - copies memory area from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes from src
 *
 * Return: dest (pointer to dest)
 */

void *_memmove(const void *dest, const void *src, unsigned long int n)
{
	unsigned long int i = 0;
	unsigned char *dst_ptr = (unsigned char *)dest;
	const unsigned char *src_ptr = (unsigned char *)src;


	if (dst_ptr == src_ptr)
		return (dst_ptr);

	if (dst_ptr < src_ptr)
	{
		for (; i < n; ++i)
			*(dst_ptr + i) = *(src_ptr + i);
	}
	else
	{
		for (i = n; i > 0; --i)
			dst_ptr[i - 1] = src_ptr[i - 1];
	}

	return (dst_ptr);
}
