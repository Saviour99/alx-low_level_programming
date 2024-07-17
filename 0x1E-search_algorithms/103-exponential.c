#include "search_algos.h"

/**
 * exponential search - function that searches for a value in a sorted
 * array of integers using the exponential search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, bound;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (array[i] <= value && i < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	bound = fmin(i, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, bound);

	return (bin_search(array, i / 2, bound, value));
}

/**
 * bin_search - function that searches for a value in a sorted
 * array of integers using the binary search algorithm
 * @array: A pointer to the first element of the array
 * @low: The lowest element in the array
 * @high: The highest element in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int bin_search(int *array, int low, int high, int value)
{
	int mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
