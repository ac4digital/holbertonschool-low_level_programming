#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * wich contains s1 followed by the first n bytes of s2
 * @s1: string number 1
 * @s2: string number 2
 * @n: number of first bytes to concatenate
 * Return: returns the pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int s1_length = 0;

	if (s1 == NULL)
		s1 = "";
	else
		while (s1[i] != '\0')
		{
			i++;
		}

	if (s2 == NULL)
		s2 = "";
	else
		while (s2[j] != '\0')
		{
			j++;
		}
	if (n >= j)
		n = j;
	pointer = malloc(sizeof(char) * (i + n + 1));
	if (pointer == NULL)
		return (NULL);
	s1_length = i;
	i = 0;
	j = 0;
	for (i = 0; i < s1_length; i++)
		pointer[i] = s1[i];

	while (j < n)
	{
		pointer[i] = s2[j];
		i++;
		j++;
	}
	pointer[i] = '\0';
	return (pointer);
}
