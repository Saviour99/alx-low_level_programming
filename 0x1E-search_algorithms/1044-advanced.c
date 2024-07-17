#include "search_algos.h"

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
	int i, mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	mid = low + (high - low) / 2;

	if (value == array[mid])
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (bin_search(array, low, mid - 1, value));
	}
	else if (value < array[mid])
	{
		return (bin_search(array, low, mid - 1, value));
	}
	else
		return (bin_search(array, mid + 1, high, value));
}

/**
 * advanced_binary - function that searches for a value in an array of
 * integers using the advanced binary search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (bin_search(array, 0, size - 1, value));
}
