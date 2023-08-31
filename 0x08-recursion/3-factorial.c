#include "main.h"
/**
  *factorial -  this function prints factorial of numbers
  *@n: the int vslue
  *Return: -1 or 1
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
