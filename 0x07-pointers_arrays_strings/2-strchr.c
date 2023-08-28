#include "main.h"

/**
 * _strchr - function that fills memory with a constant byte.
 * @s: pointer to put the cosntant
 * @c: cosntant
 * Return: pointer to s.
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
