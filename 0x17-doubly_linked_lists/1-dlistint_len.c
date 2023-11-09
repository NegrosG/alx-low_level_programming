#include "lists.h"

/**
 * dlistint_len - returns the lenght of list
 * @h: head of the list
 * Return: the size of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
