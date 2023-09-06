#include "main.h"

/**
  *alloc_grid - returns pointer to a 2 dimensional array of integers.
  *@width: this is the column
  *@height: this is the row
  *Return: returns a 2 dimensional array
  */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **new;

	if (width <= 0 || height <= 0)
		return (NULL);

	new = malloc(sizeof(int *) * height);

	if (new == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		new[a] = malloc(sizeof(int) * width);

		if (new[a] == NULL)
		{
			free(new);
			for (b = 0; b <= height; b++)
				free(new[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			new[a][b] = 0;
	}
	return (new);
}
