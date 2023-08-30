#include "main.h"

/**
  * _strlen_recursion - this function prints lenght of string
  *@s: the pointer of string
  *Return: the lenght
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
