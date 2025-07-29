#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description: This function iterates through a linked list,
 * freeing the memory allocated for each node and its string.
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
