#include "main.h"

/**
  *free_grid - this function frees the grid
  *@grid: this is the grid of memories
  *@height: integer of height
  *Return: (void)
  */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
