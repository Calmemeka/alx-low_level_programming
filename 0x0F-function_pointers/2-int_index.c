#include "function_pointers.h"

/**
 * int_index - function that searches for a number
 * @array: array
 * @size: size of array element
 * @cmp: pointer to function to use to compare
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
