#include "main.h"

/**
 * _memset - this is the function that fills a memory area
 * @s: this is the pointer to the char b
 * @b: this is the character variable
 * @n: this is the number of character
 * Return: pointer s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
