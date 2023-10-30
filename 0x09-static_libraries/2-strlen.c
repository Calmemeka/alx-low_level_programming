#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s: string whose lenght is to be printed
 *Return: lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
