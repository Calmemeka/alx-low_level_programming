#include <stdio.h>
#include "main.h"

/**
 * _strchr - The Entry point
 *@s: a pointer pointing to the first occurrence of the character
 *@c: character that is being pointed at
 *Return: always 0
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0 ; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
			return (s + itr);
	}

	return (NULL);
}
