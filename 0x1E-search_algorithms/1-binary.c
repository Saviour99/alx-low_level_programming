#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		size_t mid = (l + r) / 2;

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
