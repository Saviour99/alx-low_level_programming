#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - print a pointer of two dimensional array
 *@grid: rows
 *@height: columns
 *
 *Return: pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

