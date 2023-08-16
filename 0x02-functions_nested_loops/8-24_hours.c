#include "main.h"

/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int minit, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minit = 0; minit <= 59; minit++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minit / 10) + 48);
			_putchar((minit % 10) + 48);
			_putchar('\n');
		}
	}
}
