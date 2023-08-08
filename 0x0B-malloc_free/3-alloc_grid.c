#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - Write a function that returns a pointer to a
  * 2 dimensional array of integers.
  *
  * @width: int
  * @height: int
  *
  * Return: 2d array
  */

int **alloc_grid(int width, int height)
{
	int w, x, y, l;
	int **c;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		c[w] = malloc(sizeof(int) * width);

		if (c[w] == NULL)
		{
			for (x = w; x >= 0; x--)
			{
				free(c[x]);
			}

			free(c);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			c[y][z] = 0;
		}
	}

	return (c);
}
