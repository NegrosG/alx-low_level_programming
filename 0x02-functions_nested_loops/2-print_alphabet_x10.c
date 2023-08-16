#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabet x10
 * Return: (0) is success
 */

void print_alphabet_x10(void)
{
	int k;
	char l;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
