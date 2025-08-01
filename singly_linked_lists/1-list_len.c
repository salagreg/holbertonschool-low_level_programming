#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list
  * @h: pointer to the head of the list
  *
  * Return: number of elements in the list
  */
size_t list_len(const list_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
