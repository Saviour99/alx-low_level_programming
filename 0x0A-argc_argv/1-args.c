#include "main.h"
#include <stdio.h>

/**
 *main - print the number of argument
 *@argc: argument count
 *@argv: argument array
 *Return: name
 */

int main(int argc, char *argv[])
{
	(void)argv;
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}

