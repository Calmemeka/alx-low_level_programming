#include "lists.h"

/**
 * free_listint2 - a function that  frees a linked list
 * @head: the pointer to the listint_t list to be freed
 * Return: Nothing
 *
 * by Calmemeka
 */

void free_listint2(listint_t **head)
{
	listint_t *tempor;

	if (head == NULL)
		return;

	while (*head)
	{
		tempor = (*head)->next;
		free(*head);
		*head = tempor;
	}

	*head = NULL;
}
