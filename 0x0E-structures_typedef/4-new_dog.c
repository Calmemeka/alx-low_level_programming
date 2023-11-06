#include "dog.h"

/**
 * new_dog - fuction creates a profile for a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < nl; c++)
		dog->name[c] = name[c];
	dog->age = age;

	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < ol; c++)
		dog->owner[c] = owner[c];

	return (dog);
}
