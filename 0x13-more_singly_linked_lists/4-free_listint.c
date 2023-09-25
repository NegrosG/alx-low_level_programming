#include "lists.h"

/**
  *free_listint - this function frees a list
  *@head: the list to be freed
  */

void free_listint(listint_t *head)
{
	listint_t *freenode;

	for (; head; head = head->next)
	{
		freenode = head;
		free(freenode);
	}
}
