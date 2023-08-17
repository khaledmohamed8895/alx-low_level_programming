#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only using _putchar twice
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int number = 0;

	do {
		_putchar(number + 48);
		number++;
	} while (number >= 0 && number <= 9);
	_putchar('\n');
}
