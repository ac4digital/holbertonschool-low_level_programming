#include "main.h"
/**
 * _strspn - functions that gets the length of a prefix substring
 * @s: the string
 * @accept: contains bytes from accept
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int length;

	length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				length++;
			}
		}
	}
	return (length);
}
