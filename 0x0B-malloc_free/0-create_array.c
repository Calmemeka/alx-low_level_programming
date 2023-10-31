#include "main.h"

/**
 * create_array - create array of size "size" and assign a char c
 * @size: size to be alocated
 * @c: char to assign
 * Return: pointer to array, "NULL" if failed
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
