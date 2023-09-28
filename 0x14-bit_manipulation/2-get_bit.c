#include "main.h"

/**
  *get_bit - this function returns value at given bit
  *@n: this is tghe  bit to get
  *@index: this is the number to index
  *Return:value of bit or -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
