#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at given index
 * @head: pointer to head of the list
 * @index: index of node
 * Return: address of node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
