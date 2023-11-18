#include "lists.h"

/**
 * free_list - a function that frees a linked list
 * @head: a pointer to the head of a linked list.
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tempor;

	while (head)
	{
		tempor = head->next;
		free(head->str);
		free(head);
		head = tempor;
	}
}
