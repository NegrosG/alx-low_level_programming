#include "main.h"

/**
  *array_range - this function creates array of integers
  *@min: this min value
  *@max: the  max value
  *Return: the new array
  */


int *array_range(int min, int max)
{
	int i;
	int val;
	int *arr;

	if (min > max)
		return (NULL);
	val = max - min + 1;

	arr = malloc(sizeof(int) * val);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < val; i++)
		arr[i] = min++;
	return (arr);
}
