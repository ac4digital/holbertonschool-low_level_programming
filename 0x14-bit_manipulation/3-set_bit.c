#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
