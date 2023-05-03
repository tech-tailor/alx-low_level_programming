#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}

	return (lent);
}
