#include "main.h"

/**
  *_sqrt_recursion - this function return the natural square root of a number
  *@n: int number
  *Return: no square root, return -1. else return natural
  */

int _sqrt_recursion(int n)
{
	return (mar(n, 1));
}

/**
  *mar - a function to solve the recursion
  *@j: number to determine if square root
  *@i: incremenr int to compare j
  *Return: square root if natural square root or -1 if none found
  */

int mar(int i, int j)
{
	int square;

	square = j * j;
	if (square == i)
		return (j);
	else if (square < i)
		return (mar(i, j + 1));
	else
		return (-1);
}

