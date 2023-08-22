#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: the string to be reverses
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char a;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0 ; i < count / 2; i++)
	{
		a = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = a;
	}
}
