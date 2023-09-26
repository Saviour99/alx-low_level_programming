#include "main.h"
#include <stddef.h>

/**
 *_strstr - Entry point
 *@haystack: input
 *@needle: input
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return (NULL);
}
