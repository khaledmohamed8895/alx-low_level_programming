#include "main.h"

/**
 * _strlen - that returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}
