#include "hash_tables.h"

/**
  *key_index - function gives index of a key
  *@key: this is the key to get index for
  *@size: this is the size of the hash_table
  *Return: the index of the key/value should be stored
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
