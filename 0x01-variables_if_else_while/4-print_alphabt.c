#include <stdio.h>

/**
 * main - Program prints alphabet in lowercase followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
		putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
