#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenate two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of characters
 *Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (j = 0 ; s2[j] != '\0' ; j++)
		len2++;

	ptr = malloc(sizeof(char) * (len1 + n   + 1));

	if (ptr == NULL)
		return (NULL);

	if (n >= len2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			ptr[i] = s1[i];
		for (j = 0 ; s2[j] != '\0' ; j++)
			ptr[len1 + j] = s2[j];
		ptr[len1 + j] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			ptr[i] = s1[i];
		for (j = 0 ; j < n ; j++)
			ptr[len1 + j] = s2[j];
		ptr[len1 + j] = '\0';
	}
	return (ptr);
}
