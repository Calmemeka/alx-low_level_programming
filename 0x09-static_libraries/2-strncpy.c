#include "main.h"

/**
 *_strncpy - function that copies a string to a destination
 * @src: source
 * @dest: destination
 * @n: The length of str
 * Return: pointer to the result string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);

}
