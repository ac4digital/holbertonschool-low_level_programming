#include <stdio.h>

/**
 * main - Program that prints all possible combinations of two digits
 *
 * Return: 0 Success
 */

int main(void)
{
	int counter_1, counter_2;

	counter_1 = '0';
	do {
		counter_2 = '0';
		do {
			if ((counter_1 < counter_2) && (counter_2 <= '9'))
			{
				putchar(counter_1);
				putchar(counter_2);

				if ((counter_2 < '9') || (counter_1 < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			counter_2++;
		} while (counter_2 <= '9');

		counter_1++;
	} while (counter_1 <= '9');

	putchar('\n');

	return (0);

}
