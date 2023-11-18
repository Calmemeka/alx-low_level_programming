#include "lists.h"

/**
 * list_len - function returns the num of elements in a linked list
 * @h: the pointer to a list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t Length = 0;
	const list_t *Node = h;

	while (Node != NULL)
	{
		Length++;
		Node = Node->next;
	}

	return (Length);
}
