#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory
 *@b: positive integer
 *
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);


}
