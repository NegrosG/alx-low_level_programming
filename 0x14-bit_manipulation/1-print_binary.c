#include "main.h"

/**
  *print_binary - this function prints binary representation of a number
  *@n: the number to print
  */

void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8;
	int printb = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			printb++;
		}
		else if (printb)
			_putchar('0');
	}
	if (!printb)
		_putchar('0');
}
