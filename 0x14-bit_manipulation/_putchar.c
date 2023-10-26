#include "main.h"

/**
 *_putchar - prints characters
 *@c: characters
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
