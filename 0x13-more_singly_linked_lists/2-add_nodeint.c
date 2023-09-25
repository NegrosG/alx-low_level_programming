#include "lists.h"

/**
  *add_nodeint - this function adds a new node to the beginning of a list
  *@head: this is the first node of the list
  *@n: this is the integer to point to
  *Return: returns address or null if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);

	newhead->n = n;

	newhead->next = *head;
	*head = newhead;
	return (*head);
}
