#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function iterates through a doubly linked list,
 * freeing the memory allocated for each node.
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *temp;

  while (head != NULL)
  {
    temp = head;
    head = head->next;
    free(temp);
  }
}
