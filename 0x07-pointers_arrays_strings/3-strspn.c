#include "main.h"

/**
 * _strspn - this function get the  lenght of a prefix substring
 * @s: this is the pointer
 * @accept: this is the string to search
 * Return: returns the number of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[a] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
