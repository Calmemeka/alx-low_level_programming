#include "main.h"

/**
 * _calloc - function that allocates memory using calloc
 * @nmemb: memory
 * @size: size of memory
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
		return (NULL);

	for (; a < nmemb * size; a++)
	{
		pnt[a] = 0;
	}

	return (pnt);
}
