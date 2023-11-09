#include "lists.h"

/**
 * sum_dlistint - returns the sum of values of dlist
 * @head: pointer to head of the list
 * Return: sum of all values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
