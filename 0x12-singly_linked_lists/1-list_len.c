#include  "lists.h"

/**
  *list_len - this function returns the number of elements in a linked list
  *@h: the pointer
  *Return: the numbers of elements
  */


size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h !=  NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

