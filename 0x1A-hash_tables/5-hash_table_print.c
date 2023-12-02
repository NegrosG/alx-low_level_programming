#include "hash_tables.h"

/**
  *hash_table_print - function prints a hash table
  *@ht: the hash table to be printed
  *Return: void
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	char flag = 0;
	unsigned long int j;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("(");
	for (j = 0; j < ht->size; j++)
	{
		tmp = ht->array[j];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf(")\n");
}
