#include "main.h"

/**
 * _strchr - this function locates a character in string
 * @s: the pointer
 * @c: the character to locate
 * Return: S or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
