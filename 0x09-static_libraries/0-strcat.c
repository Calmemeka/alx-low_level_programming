#include "main.h"

/**
 * _strcat - concatenate 2 a string
 * @dest: destination
 * @src: source
 * Return: concatenated char result
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
