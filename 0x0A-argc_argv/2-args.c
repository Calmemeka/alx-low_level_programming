#include "main.h"

/**
 *main - this function prints all arguments it receives
 *@argc: number of args
 *@argv: array or vectors of args
 *Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
