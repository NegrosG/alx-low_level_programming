#include "lists.h"

/**
  *get_nodeint_at_index - this function returns nth node of a list
  *@head: this is the pointer to the first node
  *@index: index of node to get
  *Return: returns nth node or NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nnode;
	unsigned int i;

	for (nnode = head, i = 0; nnode && i < index; nnode = nnode->next, i++)
		;
	return (nnode);
}
