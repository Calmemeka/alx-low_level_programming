#include "main.h"


/**
 * _isdigit -  checking if a functiion is a digit 0-9
 * @c: character to check
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
