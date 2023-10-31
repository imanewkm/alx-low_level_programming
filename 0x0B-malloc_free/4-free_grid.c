#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees grid
 * @grid: 2D array of ints
 * @height: height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
