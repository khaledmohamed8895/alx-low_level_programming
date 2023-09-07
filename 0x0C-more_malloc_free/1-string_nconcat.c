#include "main.h"

/**
 * *string_nconcat - that concatenates two strings
 * @s1: ptr of first string
 * @s2: ptr of secound string
 * @n: number of bytes
 * Return: poiner to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0';)
	{
		s1_len++;
	}

	for (s2_len = 0; s2[s2_len] != '\0';)
	{
		s2_len++;
	}

	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
