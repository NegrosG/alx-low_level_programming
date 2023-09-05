#include "main.h"

/**
  *_strdup - this function retuns a pointer to a newly allocated space
  *@str: this is the pointer to be copied from
  *Return: retuns the copied pointer or null
  */

char *_strdup(char *str)
{
	int all = 0;
	char *new;
	int a;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		all++;
	new = malloc(sizeof(char) * all + 1);

	if (new == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		new[a] = str[a];
	return (new);
}
