#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_elements = 0;

	while (h != NULL)
	{
		nbr_elements++;
		h = h->next;
	}
	return (nbr_elements);
}
