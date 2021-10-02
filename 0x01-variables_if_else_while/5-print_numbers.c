#include <stdio.h>

/**
 * main - Program prints a single digit numbers of base 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int number_base_10;

	for (number_base_10 = 0; number_base_10 < 10; number_base_10++)
		printf("%i\n", number_base_10);

	return (0);
}
