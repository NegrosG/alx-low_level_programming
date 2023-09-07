#include "main.h"

/**
  *malloc_checked - this function returns a pointer to newly allocated memory
  *@b: this is the size of memory
  *Return: 98 or new memory
  */

void *malloc_checked(unsigned int b)
{
	int *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	else
		return (new);
}
