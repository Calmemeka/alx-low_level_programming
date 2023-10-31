#include "main.h"

/**
 * main - adds multiple positive numbers.
 * @argc: number args
 * @argv: array or vector of args
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, num, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
