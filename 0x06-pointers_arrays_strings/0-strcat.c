#include "main.h"

/**
 * _strcat - this is the function that appends source to destination
 * @dest: this destination string
 * @src: the source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest1 = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest1);
}
