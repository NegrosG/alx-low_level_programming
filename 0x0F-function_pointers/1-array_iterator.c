#include "function_pointers.h"

/**
  *array_iterator - this function executes a function given parameter
  *@array: the array to execute on
  *@size: this is size of array
  *@action: the pointer function to execute
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}


