#include "main.h"

/**
 * _puts_recursion - This is a function that prints a string
 * @s: string to print
 *Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
