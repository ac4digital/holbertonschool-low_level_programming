#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
		return (NULL);
	string = malloc(sizeof(char) * size);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		string[i] = c;
		i++;
	}
	return (string);
}
