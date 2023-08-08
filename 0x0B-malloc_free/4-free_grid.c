#include "main.h"

/**
  * free_grid - Write a function that frees a 2 dimensional grid
  * previously created by your alloc_grid function.
  *
  * @grid: gird of memories
  * @height: int
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
