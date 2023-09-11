#include "main.h"

/**
 * *_memset - fills memory with a const byte
 * @s: ptr to put the const
 * @b: constant
 * @n: max bytes to use
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - that allocates memory for an array, using malloc.
 * @nmemb: array length
 * @size: size of each element
 * Return: poiner
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}