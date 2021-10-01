#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)
{
	/* Variable Initialisation */
	char v_character;
	int v_integer;
	long int v_long;
	long long v_long_long;
	float v_float;
	/* Prints */
	printf("Size of a char: %lu byte(s)\n", sizeof(v_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(v_integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(v_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(v_long_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(v_float));
	return (0);
}
			

