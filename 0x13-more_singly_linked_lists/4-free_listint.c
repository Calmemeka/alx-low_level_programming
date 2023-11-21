#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the listint_t list to be freed
 * Return: Nothing
 *
 * by Calmemeka
 */

void free_listint(listint_t *head)
{
	listint_t *tempor;

	while (head)
	{
		tempor = head->next;
		free(head);
		head = tempor;
	}
}
