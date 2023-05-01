#include "lists.h"
#include <stddef.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
  size_t counts = 0;
  const listint_t *node = head, *tmp = NULL;

  while (node != NULL)
    {
      printf("[%p] %d\n", (void *)node, node->n);
      counts++;

      if (node < node->next && node->next != NULL)
	{
	  printf("-> [%p] %d\n", (void *)node->next, node->next->n);
	  break;
        }
      tmp = node;
      tmp = tmp->next;
    }
  if (tmp == NULL)
    printf("[NULL]\n");

  return (counts);
}
