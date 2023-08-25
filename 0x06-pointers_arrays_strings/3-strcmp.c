#include "main.h"

/**
 * _strcmp - this functiom compares 2 strings
 * @s1: the first string
 * @s2: the secong string
 * Return: (0)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] -  s2[i]);
			else if (s1[i] > s2[i])
				return (s2[i] - s1[i]);
		}
	}
	return (0);
}
