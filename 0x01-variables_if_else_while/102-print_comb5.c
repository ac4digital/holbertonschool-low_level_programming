#include <stdio.h>

/**
 * main - Program prints all posible combinations of two-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int counter_1, counter_2;

	counter_1 = 0;

	do {
		counter_2 = 0;

		do {
			if (counter_1 < counter_2)
			{
				putchar((counter_1 / 10) + '0');
				putchar((counter_1 % 10) + '0');
				putchar(' ');
				putchar((counter_2 / 10) + '0');
				putchar((counter_2 % 10) + '0');

				if (counter_1 != 98 || counter_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

			counter_2++;
		} while (counter_2 <= 99);

		counter_1++;
	} while (counter_1 <= 99);

	putchar('\n');

	return (0);
}
