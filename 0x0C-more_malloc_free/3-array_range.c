#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - create an array of integers
 *@min: min integer
 *@max: max integer
 *
 *Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
