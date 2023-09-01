#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 *	 on erro, -1 is returned, and erro is set approriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
