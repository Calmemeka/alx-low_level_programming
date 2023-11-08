#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - Addition
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Modulus
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
