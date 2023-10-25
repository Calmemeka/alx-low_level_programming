#include "main.h"

/**
 * checker - should check if number is prime
 * @a: Number to check
 * @b: 2nd Number to check
 * Return: integer
 */

int checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (checker(a + 1, b));
}

/**
 * is_prime_number - function that states if number is prime
 * @n: number to check
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
