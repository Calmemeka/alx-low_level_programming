#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: the pointer points to the first node in the list
 * Return: pointer to the first node in the new list
 *
 * by Calmemeka
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
