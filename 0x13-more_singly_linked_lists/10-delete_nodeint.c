#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *curr_pt = NULL;
  listint_t *ptr = *head;
  unsigned int j = 0;

  if (head == NULL)
    return -1;

  if (index == 0)
    {
      ptr = *head;
      *head = (*head)->next;
      free(ptr);
      return 1;
    }

  while (j < index - 1)
    {
      if (!ptr || !(ptr->next))
	return (-1);
      ptr = ptr->next;
      j++;
    }

  curr_pt = ptr->next;
  ptr->next = curr_pt->next;
  free(curr_pt);

  return (1);
}
