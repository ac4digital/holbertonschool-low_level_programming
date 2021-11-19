#include "main.h"

/**
 * get_endianness - function that checks the endiannes
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *p_test = (char *)&num;

	return (*p_test);

}
