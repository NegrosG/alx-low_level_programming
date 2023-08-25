#include "main.h"

/**
 * _strncat - function to concatenate
 * @dest: the destination string
 * @src: the source string
 * @n: number of this times concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
			dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (new_dest);
}
