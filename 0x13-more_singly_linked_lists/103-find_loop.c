#include "lists.h"

/**
  *find_listint_loop - find a loop in a linked list
  *@head: linked list to search
  *Return: address of node where loop starts/returns or NULL
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *end;

	if (!head)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
