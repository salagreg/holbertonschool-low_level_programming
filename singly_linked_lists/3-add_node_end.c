#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end;
	list_t *tmp = *head;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);
	if (new_node_end->str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}
	new_node_end->len = strlen(str);
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node_end;
	}
	return (new_node_end);
}
