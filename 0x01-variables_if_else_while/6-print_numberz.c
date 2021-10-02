#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int number_base_10 = 0;

	do {
		putchar(number_base_10 + '0');
		number_base_10++;
	} while (number_base_10 < 10);

	putchar('\n');

	return (0);
}
