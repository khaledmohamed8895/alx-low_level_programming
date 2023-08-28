#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: poniter to put the const
 * @b: const
 * @n: max bytes to use
 * Return:pointer s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
