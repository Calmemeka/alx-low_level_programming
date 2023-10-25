#include "main.h"

/**
 *_strlen_recursion -  This is a function that returns the length of a string.
 *@s: the string to be returned
 *Return: returns the lenght of string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght +=  _strlen_recursion(s + 1);

	}
	return (lenght);
}
