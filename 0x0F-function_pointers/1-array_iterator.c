#include "function_pointers.h"

/**
 * array_iterator - funtion and exacutes a parameter function
 * @array: array
 * @size: size of aay of element to execute
 * @action: pointer to fuction
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
