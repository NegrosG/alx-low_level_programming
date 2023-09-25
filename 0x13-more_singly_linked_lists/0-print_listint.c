#include "lists.h"

/**
  *print_listint - this function prints the elements of the lists
  *@h: this is the pointer to the linked lists
  *Return: returns the elements and count
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}


