#include "main.h"
/**
 * _abs - the function prints absolute vavlue of integer
 * @a: the parameter of the integer
 * Return: a or -a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
