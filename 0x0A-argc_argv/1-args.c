#include <stdio.h>
/**
 * main - function prints the number of arguments passed into it
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
