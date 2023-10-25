#include "main.h"

/**
 *factorial - This function returns the factorial of a given number.
 *@n: the number to find the factorial of
 *Return: int
*/

int factorial(int n)
{
	int f;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
			return (f);

}
