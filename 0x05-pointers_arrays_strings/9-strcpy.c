#include "main.h"

/**
 * *_strcpy - that copies the string pointed to by src,
 * @dest: void pointer to memory allocated with malloc(old_size).
 * @src: size in bytes, of the allocated space for ptr
 * Return: value of pointer of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

