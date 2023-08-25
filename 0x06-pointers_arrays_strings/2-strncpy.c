#include "main.h"

/**
 * _strncpy - this function copies from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of string
 * Return: (dest)
 */


char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		src++;
	dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
