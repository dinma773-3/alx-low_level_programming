#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: fred listint_t list
 */
void free_listint(listint_t *head)
{
  listint_t *h;

  while (head != NULL)
    {
      h = head;
      head = head->next;
      free(h);
    }
}
