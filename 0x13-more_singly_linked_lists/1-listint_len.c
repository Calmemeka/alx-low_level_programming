#include "lists.h"

/**
 * listint_len - a funcion that returns the num of elements in a linked lists
 * @h: the linked list to traverse
 * Return: returns number of nodes
 *
 * by Calmemeka
 */

size_t listint_len(const listint_t *h)
{
	unsigned int number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
