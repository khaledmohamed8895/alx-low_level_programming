#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers
 * @argc: int
 * @argv:list
 * Return: 0 if (success);
 */

int main(int argc, char **argv)
{
	int length;

	if (argc == 3)
	{
		length = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", length);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
