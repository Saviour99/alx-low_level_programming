#include "main.h"

/**
 *_memcpy - Entry point
 *@dest: to memory area
 *@src: from memory area
 *@n: number of copies
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		dest[j] = src[j];
	return (dest);
}
