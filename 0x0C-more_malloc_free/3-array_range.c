#include "main.h"

/**
 * array_range - a function for creating an array of integers
 * @min: minimum or least
 * @max: Maximum
 * Return: pointer integer
 */

int *array_range(int min, int max)
{
	int *pnt;
	int position, count = 0;

	if (min > max)
		return (NULL);

	position = (max - min) + 1;
	pnt = malloc(position * sizeof(int));

	if (pnt == NULL)
		return (NULL);

	for (; count < position; count++)
	{
		pnt[count] = min;
		min += 1;
	}
	return (pnt);
}
