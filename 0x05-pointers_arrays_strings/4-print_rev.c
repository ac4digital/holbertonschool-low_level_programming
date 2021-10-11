#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int index, length;

	index = 0;

	while (*s != '\0')
	{
		index++;
	}

	length = index;

	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
