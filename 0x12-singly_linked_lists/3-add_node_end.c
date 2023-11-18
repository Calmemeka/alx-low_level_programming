#include "lists.h"

/**
 * add_node_end - functions that adds a new node to the end of a linked list
 * @head: a pointer to the head of the linked list.
 * @str: the string to put in the new node.
 * Return: NULL if it failed or address of a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
