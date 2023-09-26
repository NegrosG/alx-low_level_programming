#include "lists.h"

/**
  *free_listint2 - this function frees a list
  *@head: address of pointer to first node
  */

void free_listint2(listint_t **head)
{
	listint_t *freenode, *node;

	if (head == NULL)
		return;


	node = *head;
	while (node)
	{
		freenode = node;
		node = node->next;
		free(freenode);
	}
	*head = NULL;
}
