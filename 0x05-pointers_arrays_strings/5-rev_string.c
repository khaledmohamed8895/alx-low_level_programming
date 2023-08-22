#include "main.h"

/**
 * rev_string - that reverses a string
 *
 * @s: string parameter input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int x, i;
	char tem;

	/*find string lenght withot null char*/
	for (x = 0; s[x] != '\0'; ++x)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; i++)
	{
		tem = s[i];
		s[i] = s[x - 1 - i];/*-1 because the array starts from 0*/
		s[x - 1 - i] = tem;
	}
}
