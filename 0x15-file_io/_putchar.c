#include "main.h"

/**
 *_putchar- prints characters
 *@c: character
 *
 *Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
