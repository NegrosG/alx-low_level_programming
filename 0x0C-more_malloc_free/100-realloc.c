#include "main.h"

/**
  *_realloc - this function allocates a memory block using malloc and free
  *@ptr: pointer to memory of old_size
  *@old_size: size in bte allocated for ptr
  *@new_size: size in byte of new memory
  *Return: null if new_size = 0
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)p + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (p);
}
