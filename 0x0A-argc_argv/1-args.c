#include "main.h"

/**
 *main - a function prints the number of arguments passed to a program
 *@argc: number of args
 *@argv: array or vector of args
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
