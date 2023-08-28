#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Description
 * @a: 2d array of int types
 * @size: input size of array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y];
		sum2 += a[size - y - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}

