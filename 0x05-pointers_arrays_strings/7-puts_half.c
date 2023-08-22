#include "main.h"

/**
 * puts_half - the function prints half of string
 * @str: this is the string
 * Return: half of string
 */

void puts_half(char *str)
{
	int i;
	int a;
	int sum = 0;

	for (i = 0; str[i] != '\0'; i++)
		sum++;
	a = (sum - 1) / 2;
	for (i = a + 1; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
