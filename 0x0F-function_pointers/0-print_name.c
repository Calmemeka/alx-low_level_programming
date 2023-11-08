#include "function_pointers.h"

/**
 * print_name - a function that prints a name to st output
 * @name: name to be printed
 * @f: pointer to function that prints name
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
