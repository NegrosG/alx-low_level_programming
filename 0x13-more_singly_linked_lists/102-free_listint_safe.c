#include "lists.h"

/**
  *find_listint_loop_fl - this function finds a loop in a linked list
  *@head: this is the linked list to search
  *Return: address of node or NULL if no loop
  */

listint_t *find_listint_loop_fl(listint_t *head)
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

/**
  *free_listint_safe - frees a listint list,even if it has a loop
  *@h: head of list
  *Return: amount of nodes freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	listint_t *loopn;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopn = find_listint_loop_fl(*h);
	for (len = 0; (*h != loopn || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopn && loop)
		{
			if (loopn == loopn->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
