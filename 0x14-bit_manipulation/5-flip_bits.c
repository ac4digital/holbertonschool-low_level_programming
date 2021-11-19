#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would 
 * need to flip to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			i++;
		n = n >> 1;
	}

	return (i);
}
