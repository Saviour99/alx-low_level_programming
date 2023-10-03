#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - print a concatenated string
 *@s1: string 1
 *@s2: string 2
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		ptr[len1 + i] = s2[i];
	return (ptr);
}
