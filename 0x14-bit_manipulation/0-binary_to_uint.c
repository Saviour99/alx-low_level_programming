#include "main.h"

/**
 *binary_to_uint - convert a binary to an unsigned int
 *@b: pointer to a string of characters
 *
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result = (result << 1) + (b[i] - '0');

		else
			return (0);
	}
	return (result);
}
