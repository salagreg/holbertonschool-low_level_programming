#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i = 0; 

    if (idx == 0)
    {
        return (add_dnodeint(h, n));
    }
    else 
    {
      for (current = *h; current != NULL && i < idx; current= current->next)
      {
        i++;
        if (i == idx - 1)
        {
          new_node = malloc(sizeof(dlistint_t));
          if (new_node == NULL)
            return (NULL);
          new_node->n = n;
          new_node->next = current->next;
          new_node->prev = current;

          if (current->next != NULL)
            current->next->prev = new_node;
          current->next = new_node;
        }
      }
    }
    return (new_node);
}
