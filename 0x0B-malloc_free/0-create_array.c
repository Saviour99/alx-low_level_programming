#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - print an array of characters and initializes it
 *@size: number of positive integers
 *@c: character
 *Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	while (i < size)
		i++;
	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
