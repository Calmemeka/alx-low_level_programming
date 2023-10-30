#include "main.h"

/**
 * _isupper - checking if letter is uppercase
 * @c: the number to be checked
 * Return: 1 got uppercase or 0 for otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
