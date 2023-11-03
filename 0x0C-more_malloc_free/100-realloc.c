#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the container
 * @old_size: former size
 * @new_size: new size
 * Return: pointer integer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt;
	unsigned int i, low = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		low = new_size;
	else
		low = old_size;

	pnt = malloc(new_size);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; i < low; i++)
	{

		pnt[i] = ((char *) ptr)[i];
	}
	free(ptr);

	return (pnt);
}
