#include "main.h"

/**
 *_strspn - The function
 *@s: Returns the number of bytes in the initial segment
 *@accept: contains the size bytes
 *Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, f, y;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[f] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
