#include "main.h"

/**
 * malloc_checked - to check and allocates memory using malloc
 * @b: variable to check
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pnt;

	pnt = malloc(b);
	if (pnt == NULL)
		exit(98);

	return (pnt);
}
