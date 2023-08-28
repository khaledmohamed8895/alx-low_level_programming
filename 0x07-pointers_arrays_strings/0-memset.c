#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: poniter to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *org_s = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (org_s);
}
