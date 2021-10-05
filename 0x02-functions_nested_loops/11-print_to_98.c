#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 *
 * @n: initial number
 *
 * Return: list of number until 98
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
	}
	printf("\n");
}

