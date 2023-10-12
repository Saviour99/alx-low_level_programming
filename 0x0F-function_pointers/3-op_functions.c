#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - add parameters
 *@a: num1
 *@b: num2
 *Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract parameters
 *@a: num1
 *@b: num2
 *Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply parameters
 *@a: num1
 *@b: num2
 *Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide parameters
 *@a: num1
 *@b: num2
 *Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulo
 *@a: num1
 *@b: num2
 *Return: integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
