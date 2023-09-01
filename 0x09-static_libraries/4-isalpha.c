#include "main.h"

/**
 * _isalpha - this function checks for alphabetical character
 * @c: the parameter checked
 * Return: (0) or (1)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
