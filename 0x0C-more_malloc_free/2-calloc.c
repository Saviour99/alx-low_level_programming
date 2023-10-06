#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - memory allocation using malloc
 *@nmemb: array
 *@size: in bytes
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
