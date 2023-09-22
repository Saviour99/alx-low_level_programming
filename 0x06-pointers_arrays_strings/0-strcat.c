#include "main.h"

/**
 *_strcat - concate two strings
 *@dest: string 1
 *@src: string 2
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i, j, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (j = 0 ; src[j] != '\0' ; j++)
		srclen++;
	for (k = 0 ; k <= srclen ; k++)
		dest[destlen + 1] = src[j];
	return (dest);
}
