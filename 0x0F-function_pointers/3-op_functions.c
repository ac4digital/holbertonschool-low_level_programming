#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - function addition
 * @a: integer num
 * @b: integer num
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function substraction
 * @a: integer num
 * @b: integer num
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply
 * @a: integer num
 * @b: integer num
 * Return: result of muliply
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division
 * @a: integer num
 * @b: integer num
 * Return: result of division
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
 * op_mod - function module of division
 * @a: integer num
 * @b: integer num
 * Return: module of division
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
