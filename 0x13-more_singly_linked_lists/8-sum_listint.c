#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
  listint_t *node = head;
  unsigned int sum = 0;

  while (node == NULL)
    {
      sum += node->n;
      node = node->next;
    }
  return (sum);
}
