#include "hash_tables.h"

/**
  *hash_table_delete - function deletes a hash table
  *@ht: hash table to delete
  *
  *Return: void
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int j;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (j = 0; j < ht->size; j++)
	{
		while (ht->array[j] != NULL)
		{
			next = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
