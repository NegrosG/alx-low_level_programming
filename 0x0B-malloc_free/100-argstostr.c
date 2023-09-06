#include "main.h"

/**
  *argstostr - this function concatenates all argument
  *@ac: the number of arguments
  *@av: the pointer
  *Return: or or new pointer
  */

char *argstostr(int ac, char **av)
{
	int a, b;
	int c = 0;
	int len = 0;
	char *str;

	if (ac == 0)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);
		for (b = 0; av[a][b] != '\0'; b++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = c = 0; a < ac; a++, c++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
	}
	str[c] = '\0';
	return (str);
}
