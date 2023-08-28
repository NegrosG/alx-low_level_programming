#include "main.h"

/**
 * _memcpy - this function copied from source to destination
 *  @dest: this is the destination
 *  @src: this is the source
 *  @n: this is the number of int ot copy
 *  Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
