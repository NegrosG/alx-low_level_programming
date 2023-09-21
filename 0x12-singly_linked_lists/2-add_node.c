#include "lists.h"

/**
  *add_node - this function add new node at beginning
  *@head: this is the pointer to the first node
  *@str: this is the pointer to the string
  *Return: address or null if it fails
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodenew;
	unsigned int len = 0;

	while (str[len])
		len++;
	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);
	nodenew->str = strdup(str);

		if (nodenew == NULL)
			return (NULL);
		nodenew->next = *head;
		nodenew->len = len;
		*head = nodenew;

		return (*head);
}
