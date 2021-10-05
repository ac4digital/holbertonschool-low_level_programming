#include <stdio.h>

/**
 * main - Prints the word _putchar
 *
 * Return: 0 Success
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 1; i <= 8; i++)
	{
		putchar(word[i]);
	}

	putchar('\n');

	return (0);
}


