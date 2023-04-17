#include "main.h"

/**
 * factorial - This prints the factorial of a number
 * @n: The number
 * Return: -1 if n less than 0 and 1 if n equals 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
