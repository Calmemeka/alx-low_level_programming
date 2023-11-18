#include "lists.h"

/**
 * add_node - a function adds a new node at the beginning of a linked list
 * @head: a poiter to the head of the list_t list
 * @str: string to be added in the node
 * Return: NULL if it fails or returns address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int length = 0;

	while (str[length])
		length++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
