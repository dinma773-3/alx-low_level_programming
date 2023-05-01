#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node’s data (n)
 *        if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
  listint_t *temp;
  int data;

  if (!head || !*head)
    return (0);

  temp = *head;
  data = temp->n;
  *head = (*head)->next;
  free(temp);

  return (data);
}
