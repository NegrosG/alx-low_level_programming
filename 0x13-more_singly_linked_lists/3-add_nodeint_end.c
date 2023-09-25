#include "lists.h"

/**
  *add_nodeint_end - this function adds a new node at the end of a list
  *@head: pointer to pointer to the head
  *@n: this integer to the newly added node
  *Return: return address or NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_last;
	listint_t *node;

	new_last = malloc(sizeof(listint_t));
	if (head == NULL || new_last == NULL)
		return (NULL);
	new_last->next = NULL;
	new_last->n = n;
	if (*head == NULL)
		*head = new_last;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_last;
	}
	return (new_last);
}
