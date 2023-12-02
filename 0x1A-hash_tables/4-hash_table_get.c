#include "hash_tables.h"

/**
  *hash_table_get - retrieves a value assigned to a key
  *@ht: table to retrieve from
  *@key: key to find value
  *
  *Return: value assigned to key or NULL i doesn't exist
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || `strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
