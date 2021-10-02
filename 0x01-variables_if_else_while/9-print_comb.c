#include <stdio.h>

/**
 * main - Program prints all posible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int single_digit = 0;

	do {
		putchar(single_digit + '0');

		if (single_digit < 9)
		{
			putchar(',');
			putchar(' ');
		}

		single_digit++;

	} while (single_digit < 10);

	putchar('\n');

	return (0);
}
