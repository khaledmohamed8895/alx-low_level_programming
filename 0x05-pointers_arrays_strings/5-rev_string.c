#include "main.h"

/**
 * rev_string - that reverses a string
 *
 * @s: pointer to print of the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, i;
	char tem;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		tem = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = tem;
	}
}
