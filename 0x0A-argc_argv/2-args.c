#include <stdio.h>
/**
 * main - function prints all arguments its receives
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
