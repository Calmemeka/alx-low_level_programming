#include "lists.h"

/**
 * looped_listint_len - a function that  Counts the number of
 * unique nodes in a looped listint_t linked list.
 * @head: a pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Else, the number of unique nodes in the list.
 *
 * by Calmemeka
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *quick;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	quick = (head->next)->next;

	while (quick)
	{
		if (slow == quick)
		{
			slow = head;
			while (slow != quick)
			{
				nodes++;
				slow = slow->next;
				quick = quick->next;
			}

			slow = slow->next;
			while (slow != quick)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		quick = (quick->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function safely prints a listint_t list
 * @head: the pointer pointing to the head of the listint_t list.
 * Return: returns the number of nodes in the list.
 *
 * by Calmemeka
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
