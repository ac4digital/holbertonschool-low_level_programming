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
	length = -1;

	while (s[index] != '\0')
	{
		temporal[index] = s[index];
		length++;
	}

	for (index = 0; length >= 0; index++)
	{
		s[index] = temporal[length];
		index++;
		length--;
	}
}
