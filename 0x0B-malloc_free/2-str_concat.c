#include "main.h"

/**
  *str_concat - this function comcatenates two strings
  *@s1: this is the first string
  *@s2: this is the second string
  *Return: returns the new pointer or null
  */

char *str_concat(char *s1, char *s2)
{
	int lenghts1 = 0;
	int lenghts2 = 0;
	int k;
	char *newally;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		lenghts1++;
	for (k = 0; s2[k] != '\0'; k++)
		lenghts2++;

	newally = malloc(sizeof(char) * (lenghts1 + lenghts2) + 1);

	if (newally == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		newally[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		newally[lenghts1 + k] = s2[k];
	return (newally);
}
