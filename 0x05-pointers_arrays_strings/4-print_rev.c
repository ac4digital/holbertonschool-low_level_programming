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

	while (s[index] <= length)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
