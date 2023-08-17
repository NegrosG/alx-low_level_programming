#include "main.h"
/**
 * print_last_digit - this function prints  the last digit of a number
 * @a: the parameter a
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
