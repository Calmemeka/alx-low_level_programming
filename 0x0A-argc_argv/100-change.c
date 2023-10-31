#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money to change
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int kobo[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(kobo[i]); i++)
			{
				if (total >= kobo[i])
				{
					count += total / kobo[i];
					total = total % kobo[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
