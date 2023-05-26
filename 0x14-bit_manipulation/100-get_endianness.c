#include "main.h"

/**
 * get_endianness - Checks and reports the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
char *k;
int i = 1;

	k = (char *)&i;
	return (*k);
}
