#include "main.h"

/**
 * _strlen - find length
 * @s: string
 * Return:  int
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
}

/**
 * *str_concat - that concatenates two strings.
 * @s1: pointer of string1
 * @s2: pointer of string2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size_1, size_2, i;
	char *c;

	if (s1 == 0)
		s1 = "\0";

	if (s2 == 0)
		s2 = "\0";

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	c = malloc((size_1 + size_2) * sizeof(char) + 1);
	if (c == 0)
		return (0);

	for (i = 0; i <= size_1 + size_2; i++)
	{
		if (i < size_1)
		{
			c[i] = s1[i];
		}
		else
		{
			c[i] = s2[i - size_1];
		}
	}
	c[i] = '\0';
	return (c);
}
