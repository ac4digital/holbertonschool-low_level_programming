#include <stdio.h>

/**
 * main - Program that prints all posible different combinations three digits
 *
 * Return: 0 Success
 */

int main(void)
{
	int count_1, count_2, count_3;

	count_1 = '0';
	do {
		count_2 = '0';
		do {
			count_3 = '0';
			do {
				if ((count_1 < count_2) && (count_2 < count_3) && (count_3 <= '9'))
				{
					putchar(count_1);
					putchar(count_2);
					putchar(count_3);

					if ((count_1 + count_2 + count_3) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
				count_3++;
			} while (count_3 <= '9');

			count_2++;
		} while (count_2 <= '9');

		count_1++;
	} while (count_1 <= '9');

	putchar('\n');

	return (0);
}
