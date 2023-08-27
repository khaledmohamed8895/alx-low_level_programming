#include "main.h"
#include "stdio.h"

/**
 * is_lower - determines whether ascii is lowercase
 * @c: charcter
 * Return: 1 if true, 0 if false.
 */

int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * is_delimitetr - determines whether ascii is a delimiter
 * @c: charcter
 * Return: 1 if true, 0 if is false.
 */

int is_delimitetr(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string of input
 * Return: string with capitalized words.
 */

char *cap_string(char *s)
{
	char *pt = s;
	int found_delimit = 1;

	while (*s)
	{
		if (is_delimitetr(*s))
		{
			found_delimit = 1;
		}
		else if (is_lower(*s) && found_delimit)
		{
			*s -= 32;
			found_delimit = 0;
		}
		else
		{
			found_delimit = 0;
		}
		s++;
	}
	return (pt);
}

