#include "main.h"

/**
 *supporting_function - print the square root of a number
 *@number: number
 *@root: input
 *Return: square root
 */

int supporting_function(int number, int root)
{
	if ((root * root) > number)
		return (-1);
	else if ((root * root) == number)
		return (root);
	else
		return (supporting_function(number, root + 1));
}

/**
 *_sqrt_recursion - print the square root of a number
 *@n: number
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (supporting_function(n, 0));
}
