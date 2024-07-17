#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the jump search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = 0, step = (size_t)sqrt(size);

	if (array == NULL)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

