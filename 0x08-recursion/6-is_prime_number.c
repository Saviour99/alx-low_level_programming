#include "main.h"

/**
 *prime_function - print a prime number
 *@num: number
 *@i: input
 *Return: prime number
 */

int prime_function(int num, int i)
{
	if (i == 1)
		return (1);
	else if (num % i == 0 && i > 0)
		return (0);
	else
		return (prime_function(num, i - 1));
}

/**
 *is_prime_number - print a prime number
 *@n: number
 *Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_function(n, n - 1));
}
