#include <stdio.h>

/**
 * main - Prints alphabet lowercase and uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');

	letter = 'A';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'Z');

	putchar('\n');

	return (0);
}
