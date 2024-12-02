#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be duplicated and added to the new node.
* Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
