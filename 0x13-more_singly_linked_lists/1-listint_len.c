#include "lists.h"
#include <stddef.h>

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
  size_t n_num = 0;

  while (h != NULL)
    {
      n_num++;
      h = h->next;
    }
  return (n_num);
}
