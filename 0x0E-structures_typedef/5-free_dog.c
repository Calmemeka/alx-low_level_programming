#include "dog.h"

/**
 * free_dog - frees allocated mem for a struct dog
 * @d: struct dog to be freed
 * Return: Lull
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
