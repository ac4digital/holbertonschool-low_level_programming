#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * validate_digit - verifies if string has only digits
 * @s: the string
 * Return: 0 for only digits and 1 for characters
 */
int validate_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - function adds positive numbers
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (validate_digit(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
