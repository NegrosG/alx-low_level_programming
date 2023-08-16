#include "main.h"

/**
 * print_alphabet - this functions prints alphabets in lowercase
 * Return: (0) is a success
 */

void print_alphabet(void){
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
