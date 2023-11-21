#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked list
 * and returns the head node’s data (n)
 * @head: the pointer to the first element in the linked list
 * Return: returns the data inside the elements that was deleted,
 * or 0 if the list is empty
 *
 * by Calmemeka
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
