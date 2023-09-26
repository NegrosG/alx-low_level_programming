#include "lists.h"

/**
  *delete_nodeint_at_index - this function deletes node at given index
  *@head: address to pointer to first node
  *@index: index of node to delete
  *Return: 1 on success or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *prevnode;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prevnode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prevnode = node;
		node = node->next;
	}
	return (-1);
}
