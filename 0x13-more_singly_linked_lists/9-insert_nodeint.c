#include "lists.h"

/**
  *insert_nodeint_at_index - this function inserts a  new node at a position
  *@head: this is the address to pointer of first node
  *@idx: index to insert new node
  *@n: n value of new node
  *
  *Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *innode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	innode = *head;
	while (innode)
	{
		if (i == idx - 1)
		{
			newnode->next = innode->next;
			innode->next = newnode;
			return (newnode);
		}
		i++;
		innode = innode->next;
	}
	free(newnode);
	return (NULL);
}
