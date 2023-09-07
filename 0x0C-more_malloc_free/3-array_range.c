#include "main.h"

/**
 * array_range - that creates an array of integers.
 * @min: start integer
 * @max: max integer
 * Return: array of integer.
 */

int *array_range(int min, int max)
{
	int lenght, i;
	int *ptr;

	if (min > max)
		return (0);
	lenght = max - min + 1;
	ptr = malloc(sizeof(int) * lenght);
	if (!ptr)
		return (0);
	for (i = 0; i < lenght; i++)
		ptr[i] = min++;
	return (ptr);
}

