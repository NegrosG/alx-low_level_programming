#include "main.h"

/**
  *set_bit - this function set value of bit to 1
  *@n: the number to set
  *@index: this is the number to index
  *Return: 1 for success or -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
