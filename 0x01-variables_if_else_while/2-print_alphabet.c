#include <stdio.h>

/**
 * main - print the lower case letters of the alphabet
 *
 * Description: print the lower case letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(9);

	return (0);
}
