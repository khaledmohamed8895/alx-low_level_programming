#include "main.h"

/**
 * _strpbrk -  that searches a string for any of a set of bytes.
 * @s: pointer of string
 * @accept: pointer of string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *		or null if no byts found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}

	return (0);
}

