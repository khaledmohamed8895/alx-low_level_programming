#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer of string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s > '\0')
		lenght += _strlen_recursion(s + 1) + 1;

	return (lenght);
}
