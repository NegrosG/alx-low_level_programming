#include "main.h"

/**
 * set_string - function sets the value of a pointer to a char
 * @s: the pointer
 * @to: the char we are to set to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
