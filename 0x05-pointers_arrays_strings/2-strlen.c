#include "main.h"
/**
 * _strlen - function returns the length of a string
 * Return: integer legth of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	do {
		s++;
		length++;
	} while (*s != '\0');

	return (length);
}

