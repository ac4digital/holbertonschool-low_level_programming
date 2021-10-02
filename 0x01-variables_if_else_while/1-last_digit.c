#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Program will asign a random number and prints the last digit.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My Code */
	last_digit = (n % 10);

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);

	if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);

	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
