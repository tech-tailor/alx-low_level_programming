#include "main.h"

/**
 *binary_to_uint- to convert decimal to binary
 *
 *@b: pointer that takes binary num
 *
 *Return: return int
 */

unsigned int binary_to_uint(const char *b)
{

	int rem;
	int i;
	int bin_dec = 0;
	int base = 1;
	int bin_num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		bin_num = (bin_num * 10) + (b[i] - '0');
	}

		for (i = 0; bin_num != 0; i++)
		{
		rem = bin_num % 10;
		bin_dec = bin_dec + rem * base;

		bin_num /= 10;
		base *= 2;
		}

	return (bin_dec);


}
