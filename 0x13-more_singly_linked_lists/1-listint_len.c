#include "lists.h"

/**
  *listint_len - this function prints the number of elements in lists
  *@h: the pointer to the list
  *Return: returns the number of elements
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
