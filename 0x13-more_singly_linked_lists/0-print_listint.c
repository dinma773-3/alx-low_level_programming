#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
  size_t n_num = 0;

  while (h != NULL)
    {
      printf("%d\n", h->n);
      n_num++;
      h = h->next;
    }
  return (n_num);
}
