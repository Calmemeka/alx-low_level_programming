#include "lists.h"

/**
 * sum_listint - this function sums up all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 * Return: returns the  resulting sum
 *
 * by Calmemeka
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
