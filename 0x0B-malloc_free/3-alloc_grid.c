#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - print a pointer of two dimensional array
 *@width: rows
 *@height: columns
 *
 *Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0 ; j <= height ; j++)
				free(ptr[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
