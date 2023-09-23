#include "main.h"

/**
 *reverse_array - array
 *@a: array 1
 *@n: indexes
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
