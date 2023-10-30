#include "main.h"

/**
 * _strpbrk - searches a string to find a set of bytes.
 * @s: the string to check
 * @accept: set of byte to find
 * Return: set of chars located.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, l;

	for (i = 0; s[i] != '\0'; i++)
		for (l = 0; accept[l] != '\0'; l++)
			if (s[i] == accept[l])
				return (&s[i]);
	return (0);
}
