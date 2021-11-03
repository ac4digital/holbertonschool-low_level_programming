#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers elements
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: the index of the first element finded otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
