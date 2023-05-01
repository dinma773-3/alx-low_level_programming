#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head of the list
 *
 * Return: head to NULL
 */
void free_listint2(listint_t **head)
{
  listint_t *n;

  if (head == NULL)
    return;

  while (*head != NULL)
    {
     n = *head;
     *head = (*head)->next;
     free(n);
    }

  *head = NULL;
}
