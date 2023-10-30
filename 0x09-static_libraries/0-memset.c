#include "main.h"

/**
 * _memset - The Entry point
 * @n: bytes of the memory area pointed to
 * @s: pointer pointing to a value n
 * @b: a constant byte
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
		s[c] = b;

	return (s);
}
