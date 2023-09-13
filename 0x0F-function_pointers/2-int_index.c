#include "function_pointers.h"

/**
  *int_index - this function searches for integers
  *@array: this is the array to search from
  *@size: this is the size of the array
  *@cmp: this is pointer to function
  *Return: return the index or -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
