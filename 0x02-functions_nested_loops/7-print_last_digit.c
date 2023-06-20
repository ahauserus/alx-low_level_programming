#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number whose last digit is to be printed.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int num)
{
	int last = _abs(num) % 10;

	_putchar(last + '0');

	return (last);
}

/**
 * _abs - computes the absolute value of an integer.
 * @num: Integer to be checked.
 *
 * Return: The absolute value of num.
 */

int _abs(int num)
{
	return (num < 0 ? -num : num);
}
