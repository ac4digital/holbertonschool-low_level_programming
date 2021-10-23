#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints all arguments its receives
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success otherwise 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
