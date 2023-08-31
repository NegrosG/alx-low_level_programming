#include "main.h"
#include <stdio.h>

/**
  *_sqrt_recursion - this function prints a square root of a number
  *@n: we want to want to request the square root of n
  *Return: return square root, 1 o -1
  */



int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i > n)
		{
			break;
		}
	}
	return (-1);
}

