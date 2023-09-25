#include "lists.h"

/**
  *free_listint - this function frees a list
  *@head: the list to be freed
  */

void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
