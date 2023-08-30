#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory allocated for in grid
 * @grid: pointer to grid
 * @height: parameter to free
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	for (; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

