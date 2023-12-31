#include "main.h"

/**
 * reverse_array - function that reverses
 *		the content of an array of integers.
 *
 * @a: an array of intgeres
 * @n: the number of elments to swap
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	i = 0, j = (n - 1);

	for (; i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
