#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the interpolation_search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value <= array[high] && value >= array[low])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", value);

	return (-1);
}

