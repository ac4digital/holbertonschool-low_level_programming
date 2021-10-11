#include "main.h"
#include <unistd.h>
/**
 * _puts - function prints a string
 * @str: string
 * Return: not
 */
void _puts(char *str)
{
	int index;

	index = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

