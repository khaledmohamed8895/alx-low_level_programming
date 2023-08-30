#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: paramter of number
 * @val: square root
 * Return: n
 */

int sqr(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - find square root
 * @n: para int to find square root
 * @val: square root
 * Return: n
 */

int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}
