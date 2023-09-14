#include "variadic_functions.h"

/**
  *sum_them_all - function returns sum of all parameters
  *@n: the number of parameters
  *Return: returns the sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	unsigned int sum = 0;

	va_list(var);
	va_start(var, n);
	for (a = 0; a < n; a++)
		sum += va_arg(var, int);
	return (sum);
}
