#include "main.h"

/**
 * string_toupper - this function chnages all lower case in string to uppercase
 * @x: pointer to string
 * Return: uppercase string
 */

char *string_toupper(char *x)
{
	int lenght;

	lenght = 0;
	while (x[lenght] != '\0')
	{
		if (x[lenght] >= 97 && x[lenght] <= 122)
		{
			x[lenght] = x[lenght] - 32;
		}
		lenght++;
	}
	return (x);
}
