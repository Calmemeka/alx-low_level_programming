#include "main.h"

/**
 *main - this function prints the name of a program
 *@argc: number of args
 *@argv: array or vector of args
 *Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
