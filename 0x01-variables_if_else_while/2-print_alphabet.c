#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	do {
		putchar(letter);
		putchar('\n');
		letter++;
	} while (letter <= 'z');

	return (0);
}
