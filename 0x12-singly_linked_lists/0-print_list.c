#include "lists.h"

/**
  *print_list - this function prints all elements of a lists
  *@h: this is the pointer
  *Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
