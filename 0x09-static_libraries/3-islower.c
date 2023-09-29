#include  "main.h"

/**
 *_islower - checing for lowercase characters
 *@c: parameter checker
 *Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
