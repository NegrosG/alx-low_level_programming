#include "main.h"

/**
  *flip_bits - this function returns number of bits it would need
  *to flip to get another
  *@n: this is the first number
  *@m: this is the second number
  *Return: number of bitsto flip to convert numbers
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		if (xor_result & 1ul)
			count++;
		xor_result = xor_result >> 1;
	}
	return (count);
}
