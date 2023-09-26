#include "lists.h"

/**
  *reverse_listint - this function reverses an int list
  *@head: the addresss of pointer to the first node
  *Return: addres of head
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *nextnode = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		nextnode = node->next;
		node->next = *head;
		*head = node;
		node = nextnode;
	}
	return (*head);
}
