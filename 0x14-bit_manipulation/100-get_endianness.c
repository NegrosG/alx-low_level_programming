#include "main.h"

/**
  *get_endianness - this function returns endianness of the system
  *
  *Return: 0 if big endian or 1 if small
  */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
