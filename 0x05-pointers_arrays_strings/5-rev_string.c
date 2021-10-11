#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0 Success
 */
void rev_string(char *s)
{
	int index, length;
	char temporal[1000];

	index = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		length = index;
	}

	for (index = 0; s[index] != '\0'; index++)
	{
		temporal[index] = s[index];
	}
	while (length >= 0)
	{
		length--;
		s[index] = temporal[length];
		index++;
	}
}
