#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  *op_add - Returns the sum of two numbers
  *@a: the first number
  *@b: the second number
  *Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub -  returns difference n two numbers
  *@a: the first number
  *@b: the second number
  *Return: sum of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - Returns the product of two numbers
  *@a: the first number
  *@b: the second number
  *Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - Returns the division  of two numbers
  *@a: the first number
  *@b: the second number
  *Return: quotient of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - Returns the remainder of the division of two numbers
  *@a: the first number
  *@b: the second number
  *Return: remainder of division of a by b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
