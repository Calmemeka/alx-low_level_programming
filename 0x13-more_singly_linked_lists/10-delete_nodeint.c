#include "lists.h"

/**
 * delete_nodeint_at_index - the function that deletes an nth node
 * in a linked list
 * @head: the pointer that points to the first element in the list
 * @index: the index of the node to be deleted
 * Return: returns 1 (Success), or -1 (Fail)
 *
 * by Calmemeka
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (c < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		c++;
	}


	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}
