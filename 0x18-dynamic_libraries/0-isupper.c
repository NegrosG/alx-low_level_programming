#include "main.h"

/**
 * _isupper - this function checks for uppercase
 * @c: this is the parameter
 * Return: (1) or (0)
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
