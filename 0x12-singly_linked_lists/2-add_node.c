#include "lists.h"

/**
  *add_node - this function add new node at beginning
  *@head: this is the pointer to the first node
  *@str: this is the pointer to the string
  *Return: address or null if it fails
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

		if (new == NULL)
			return (NULL);
		new->next = *head;
		new->len = len;
		*head = new;

		return (*head);
}
