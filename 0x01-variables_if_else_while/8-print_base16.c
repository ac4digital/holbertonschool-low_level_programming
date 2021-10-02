#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char number_base_16;

	for (number_base_16 = '0'; number_base_16 <= '9'; number_base_16++)
		putchar(number_base_16);
	for (number_base_16 = 'a'; number_base_16 <= 'f'; number_base_16++)
		putchar(number_base_16);

	putchar('\n');

	return (0);
}
