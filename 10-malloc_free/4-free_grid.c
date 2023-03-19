#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - rees a 2 dimensional grid previously
 * @grid: 2 dimensional grid
 * @height: 2 dimensional array
 *
 * Return: NULL
 **/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
