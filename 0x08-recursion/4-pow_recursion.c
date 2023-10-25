#include "main.h"

/**
 * _pow_recursion - this functions returns the power of a number
 * @x: number to be multiplied by itself
 * @y: the power
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
