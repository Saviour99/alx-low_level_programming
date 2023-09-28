#include "main.h"

/**
 *len_of_string - print length of a string
 *@s: string pointer
 *Return: 1 or 0
 */

int len_of_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_of_string(s + 1));
}

/**
 *check_palindrome - print check palindrome
 *@s: string pointer
 *@i: iterator
 *@l: length
 *Return: 1 or 0
 */

int check_palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_palindrome(s, i + 1, l - 1));
}

/**
 *is_palindrome - print palindrome string
 *@s: string pointer
 *Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, len_of_string(s)));
}
