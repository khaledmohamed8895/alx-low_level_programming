#include "main.h"

/**
 * _strdup - that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer of string
 * Return: 0;
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *j;

	if (str == 0)
		return (0);

	for (i = 0; str[size] != '\0';)
	{
		size++;
	}

	j = malloc(size * sizeof(*str) + 1);

	if (j == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
			j[i] = str[i];
	}
	return (j);
}
