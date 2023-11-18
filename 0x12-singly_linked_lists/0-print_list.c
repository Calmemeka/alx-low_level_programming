#include "lists.h"

/**
 * print_list - a function to prints all the elements of a linked list
 * @h: th pointer to the list to print
 * Return: the number of nodes printed without.
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		d++;
		h = h->next;
	}

	return (d);
}
