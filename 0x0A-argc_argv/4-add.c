#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts
 * @argc: int number of arg
 * @argv: array of pointer
 * Return: 0 ;
 */

int main(int argc, char **argv)
{
	int length = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > 9)
			{
				return (printf("Error\n"), 1);
			}
			length += atoi(argv[argc]);
		}
	}
	printf("%d\n", length);
	return (0);
}
