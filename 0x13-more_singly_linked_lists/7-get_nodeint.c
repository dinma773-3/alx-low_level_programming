#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: 1st node of the list
 * @index: desired node
 *
 * Return the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  listint_t *node = head;
  unsigned int p = 0;

  while (node && p < index)
    {
      node = node->next;
      p++;
    }

  return (node ? node : NULL);
}
