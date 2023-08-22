#include "main.h"

/**
 * puts2 - the function prints even numbers
 * @str: this is the string
 * Return: even numbers
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
