#include "main.h"

/**
 * swap_int - this functions to swap pointers
 * @a: the first value
 * @b: the second nd value
 * Retur: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
