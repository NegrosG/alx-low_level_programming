#include "lists.h"

/**
  *_r - this function reallocates memory for array of pointers
  *to the nodes in a linked list
  *@list: this is the old list to append
  *@size: this is the size of the new list
  *@new: new node to add to the list
  *
  *Return: pointer to the new list
  */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	size_t i;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
  *print_listint_safe - this function prints listint_t list
  *@head: pointer to the start of the list
  *Return: the number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	size_t num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
