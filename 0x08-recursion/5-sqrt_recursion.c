#include "main.h"

/**
 * confirm - function confirms if a number is squareroot
 * @a: number
 * @b: number
 * Return: a value
 */
int confirm(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (confirm(a + 1, b));
}

/**
 * _sqrt_recursion - calculates the squareroot of a number
 * @n: integer to find squareroot of
 * Return: natural squareroot or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (confirm(1, n));
}
