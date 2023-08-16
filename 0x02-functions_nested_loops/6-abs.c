#include "main.h"

/**
 * _abs - function that computer the absolute
 *	 value of an intger
 *
 * @n: takes in integer type  input for functions.
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
