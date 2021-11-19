#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	i = *n ^ 1 << index;
	*n = *n & i;
	return (1);
}
