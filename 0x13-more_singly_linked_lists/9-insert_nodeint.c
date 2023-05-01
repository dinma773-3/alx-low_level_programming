#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: where the new node is added
 * @n: value to insert in the new node
 *
 * Return the address of the new node, or NULL if it failed
 *       if it is not possible to add the new node at index idx, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *n_new, *curr_pt;
  unsigned int j;

  if (head == NULL)
    return NULL;

  n_new = malloc(sizeof(listint_t));
  if (n_new == NULL)
    return NULL;
  n_new->n = n;

  if (idx == 0)
    {
      n_new->next = *head;
      *head = n_new;
      return n_new;
    }

  curr_pt = *head;
  for (j = 0; j < idx - 1; j++)
    {
      if (curr_pt == NULL)
        {
	  free(n_new);
	  return NULL;
        }
      curr_pt = curr_pt->next;
    }

  n_new->next = curr_pt->next;
  curr_pt->next = n_new;

  return n_new;
}
