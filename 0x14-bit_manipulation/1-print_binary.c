#include "main.h"

/**
 *modulus_value- cal. quotient and remainder
 *@num: number argument
 *@divisor: divides the numer and it is 2
 *Return: quotient and reminder
 */

Division modulus_value(int num, int divisor)
{
	Division result;

	int count = 0;
	int abs_value = 0;

	abs_value = (num < 0) ? -num : num;
	while (abs_value >= divisor)
	{
	abs_value -= divisor;
	count++;
	}
	result.quotient = count;
	result.remainder = (abs_value < 0) ? -abs_value : abs_value;
	return (result);
}
/**
 *print_binary- print decimal to binary
 *@n: argument for the input num
 *Return: Success
 *
 */


void print_binary(unsigned long int n)
{
	Division dec_bin;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		while (n > 0)
		{
		dec_bin = modulus_value(n, 2);
		_putchar('0' + dec_bin.remainder);
		n = dec_bin.quotient;
		}
	}
}

