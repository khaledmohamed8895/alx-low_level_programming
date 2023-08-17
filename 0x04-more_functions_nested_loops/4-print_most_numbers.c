#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apert
 *	form 2 and 4 and you can
 *	only use _putchar twice
 *
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		_putchar(number + 48);
	}
	_putchar('\n');
}
