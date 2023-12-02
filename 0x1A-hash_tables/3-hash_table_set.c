#include "hash_tables.h"

/**
  *create_node - creates a new hash node
  *@key: key for node
  *@value: value for node
  *
  *Return: new node or NULL if failed
  */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
/**
  *hash_table_set - function sets a key to a value in hash table
  *@ht: hash table to add element to
  *@key: key for the data
  *@value: data tto store
  *
  *Return: 1 if succesful or 0 if failed
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node, *tmp;
	char *n_value;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = n_value;
			return (1);
		}
		tmp = tmp->next;
	}
	h_node = create_node(key, value);
	if (h_node == NULL)
		return (0);
	h_node->next = ht->array[idx];
	ht->array[idx] = h_node;
	return (1);
}
