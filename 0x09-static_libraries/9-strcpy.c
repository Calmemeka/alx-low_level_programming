#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including with terminating null byte (\0) to the dest
 * @dest: destination to copy the string
 * @src: source strings
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int leng, i;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
