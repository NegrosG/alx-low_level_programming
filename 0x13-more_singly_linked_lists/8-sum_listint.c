#include "lists.h"

/**
  *sum_listint - this function sum all data in (n) of a linked list
  *@head: this is the pointer to the first node
  *
  *Return: the sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
