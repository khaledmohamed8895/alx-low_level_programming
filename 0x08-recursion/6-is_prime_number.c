#include "main.h"

/**
 * is_prime_number - check if is a prime number
 * @other_n: int number
 * @n: int number
 * Return: 0 or 1
 */

int check_prime(int n, int other_n);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numberes if they can divid
 * @other_n: int number
 * @n: int number
 * Return: number
 */

int check_prime(int n, int other_n)
{
	if (other_n >= n && n > 1)
		return (1);
	else if (n % other_n == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other_n + 1));
}
