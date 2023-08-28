#include "main.h"

/**
 * _strpbrk - this function searches for any set of bytes
 * @s: this is the pointer
 * @accept: this is the character searched
 * Return: the pointer s
 */


char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
