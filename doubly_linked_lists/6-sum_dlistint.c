#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all the data (n) in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function traverses a doubly linked list and adds up
 * the values of the `n` field in each node.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;

  while (head != NULL)
  {
    sum += head->n;
    head = head->next;
  }
  return (sum);
}
