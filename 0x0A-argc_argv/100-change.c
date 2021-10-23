#include <stdio.h>
#include <stdlib.h>
/**
 * coins - count how many coins
 * @value: value to change
 * Return: number of coins
 */
int coins(int value)
{
	int var_coins = 0;

	if (value >= 25)
		var_coins = coins(value - 25) + 1;
	if (value >= 10 && value < 25)
		var_coins = coins(value - 10) + 1;
	if (value >= 5 && value < 10)
		var_coins = coins(value - 5) + 1;
	if (value >= 2 && value < 5)
		var_coins = coins(value - 2) + 1;
	if (value >= 1 && value < 2)
		var_coins = coins(value - 1) + 1;

	return (var_coins);

	/*return (10);*/
}

/**
 * main - function prints the minimun of coins to make change
 * for an amount of money
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success otherwise 1
 */
int main(int argc, char *argv[])
{
	int value  = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("%d 0\n", value);
		return (1);
	}

	if (value > 0)
	{
		printf("%d\n", coins(value));
	}

	return (0);
}
