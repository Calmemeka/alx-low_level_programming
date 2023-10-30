#include "main.h"

/**
 * _puts - prints strings to stdout
 * @str: pointer to the string to print
 * Return: char
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
