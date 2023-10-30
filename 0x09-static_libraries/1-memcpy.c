#include "main.h"

/**
 * _memcpy - the enry point
 *@dest: destination
 *@src: source
 *@n: memory size
 *Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
		dest[c] = src[c];

	return (dest);
}
