#include "main.h"

/**
 * print_rev - that prints a string, in reverse, followed by a new line.
 *
 * @s: pointer to print of the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
