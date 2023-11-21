#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a linked list
 * @head: the first node in the linked list
 * @index: this is the index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 *
 * by Calmemeka
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *temp = head;

	while (temp && c < index)
	{
		temp = temp->next;
		c++;
	}

	return (temp ? temp : NULL);
}
