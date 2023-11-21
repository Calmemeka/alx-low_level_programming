#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a linked list
 * @head: the pointer to the first node of the list
 * @n: the data to insert in the new node
 * Return: returns the pointer to the new node, or NULL if it fails
 *
 * by Calmemeka
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
