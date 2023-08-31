#include "main.h"

/**
 * last_index - return length
 * @s: pointer of string
 * Return: n;
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_index(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: pointer of string to check
 * Return: 0 or 1;
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - check the palindrome
 * @s: pointer of string
 * @start: intger move from right to left
 * @end: intger move from right to left
 * @mod: parameter  of int
 * Return: 0 or 1;
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}
