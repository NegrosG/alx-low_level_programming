#include "main.h"

/**
  *create_array - this function creates a new array and initialize it
  *@c: this is the specific char to be initialized
  *@size: this is the size of of array
  *Return: returns a pointer or null
  */

char *create_array(unsigned int size, char c)
{
	unsigned int a; /* declare a variable a to count size */
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
		for (a = 0; a < size; a++)
			array[a] = c;
	if (array == NULL)
		return (NULL);
	else
		return (array);
}
