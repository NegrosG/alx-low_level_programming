#include "main.h"
/**
  *_pow_recursion - this function prints value of x wih raise to power
  *@x: this value it retuns
  *@y: the raise of raise to power
  *Return: value of x, -1 or 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
