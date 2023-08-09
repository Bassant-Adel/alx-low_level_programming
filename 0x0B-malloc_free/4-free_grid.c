#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -> A function that frees a 2 dimensional
 *@grid: grid
 *@height: height
 */

void free_grid(int **grid, int height)
{

	int a;

	if (grid == NULL || height == 0)
	{

		return;

	}

	for (a = 0; a < height; a++)
	{

		free(grid[a]);

	}	free(grid);

}
