#include "lists.h"

/**
  *pop_listint - this function deletes the head node of a list
  *@head: this is the adrresss to the pointer
  *Return: the head node data
  */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
