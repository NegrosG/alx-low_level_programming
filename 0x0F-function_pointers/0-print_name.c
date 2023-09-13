#include "function_pointers.h"

/**
  *print_name - this function prints a name
  *@name: this is the name to print
  *@f: this is the function pointer
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
