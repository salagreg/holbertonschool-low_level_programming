#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *tail;
  dlistint_t *new_node = malloc(sizeof(dlistint_t));
  
  if (new_node == NULL)
  {
    return (NULL);
  }
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;
    
    if(*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    tail = *head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new_node;
    new_node->prev = tail;

    return (new_node);
}
