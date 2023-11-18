#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints a special sentence
 * before executing the main function.
 * Return: Nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
