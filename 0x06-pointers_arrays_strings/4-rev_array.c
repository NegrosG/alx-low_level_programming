#include "main.h"

/**
 * reverse_array - this function prints arrays in reverse
 * @a: the pointer
 * @n: num bers of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[n];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
