#include "main.h"

/**
  *string_nconcat - this function returns new memory which contains s1 and s2
  *@s1: the first characters
  *@s2: the second character
  *@n: the number of character to concatenates
  *Return: return null or new memory allocated
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		lens1++;
	for (j = 0; s2[j] != '\0'; j++)
		lens2++;

	new = malloc(sizeof(char) * (lens1 + n) + 1);

	if (new == NULL)
		return (NULL);
	if (n >= lens2)
	{
		for (j = 0; s1[j] != '\0'; j++)
			new[j] = s1[j];
		for (j = 0; s2[j] != '\0'; j++)
			new[lens1 + j] = s2[j];
		new[lens1 + j] = '\0';
	}
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
			new[j] = s1[j];
		for (j = 0; j < n; j++)
			new[lens1 + j] = s2[j];
		new[lens1 + j] = '\0';
	}
	return (new);
}
