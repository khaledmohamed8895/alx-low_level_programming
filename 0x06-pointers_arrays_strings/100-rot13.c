#include "main.h"

/**
 * rot13 - encoded string using rot13
 * @s: input string;
 * Return: encoded string.
 */

char *rot13(char *s)
{
	int count;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (count = 0; count <= 52; count++)
		{
			if (*s == rot13[count])
			{
				*s = Rot13[count];
				break;
			}
		}
		s++;
	}
	return (ptr);
}

