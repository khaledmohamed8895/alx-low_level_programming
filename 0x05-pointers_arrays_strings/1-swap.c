#include "main.h"

/**
 * swap_int - that swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing;
 */

void swap_int(int *a, int *b)
{
	int temps;

	temps = *a;
	*a = *b;
	*b = temps;
}
