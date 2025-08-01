#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr_node++;
	}
	return (nbr_node);
}
