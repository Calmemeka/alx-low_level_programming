#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the linked list to search for
 * Return: the address of the node where the loop starts, or NULL
 *
 * by Calmemeka
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (slow && quick && quick->next)
	{
		quick = quick->next->next;
		slow = slow->next;
		if (quick == slow)
		{
			slow = head;
			while (slow != quick)
			{
				slow = slow->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
