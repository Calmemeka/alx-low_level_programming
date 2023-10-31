#include "main.h"

/**
 * main - multiplies two given numbers.
 * @argc: number of args
 * @argv: arrays or vector of args
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
