#include "main.h"

/**
  *clear_bit - this function sets the value of a bit to 0
  *@n: the is the bit to clear
  *@index: the number of index
  *Return: 1 is a sucess or -1 if it fails
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
