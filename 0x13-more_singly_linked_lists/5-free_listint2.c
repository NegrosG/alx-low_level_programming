#include "lists.h"

/**
  *free_listint2 - this function frees a list
  *@head: address of pointer to first node
  */

void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		freenode = (*head)->next;
		free(*head);
		*head = freenode;
	}
	*head = NULL;
}
