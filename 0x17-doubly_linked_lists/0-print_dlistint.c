#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head of the list
 * Return: the size of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
