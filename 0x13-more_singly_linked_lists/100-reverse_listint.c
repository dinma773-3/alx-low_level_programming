#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head node
 *
 * Return a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
  listint_t *previous = NULL;
  listint_t *next = NULL;

  if (!head || !*head)
    return NULL;

  while (head != NULL)
    {
      next = (*head)->next;
      (*head)->next = previous;
      previous = *head;
      *head = next;
    }
  *head = previous;

  return (*head);
}
