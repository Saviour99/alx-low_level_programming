#include <stdio.h>

/**
 *swap_int - swap two integers
 *@a: value 1
 *@b: value 2
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
