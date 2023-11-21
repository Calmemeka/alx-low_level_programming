#include "lists.h"

/**
 * print_listint - function prints the elements of a linked list
 * @h: the linked list of the type listint_t to print
 * Return: returns the  number of nodes.
 *
 * by Calmemeka
 */

size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
