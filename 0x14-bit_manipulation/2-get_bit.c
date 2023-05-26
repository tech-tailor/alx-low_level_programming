#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @k: integer
 * @index: index
 * Return: integer
 */

int get_bit(unsigned long int k, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((k >> index) & 1);
}
