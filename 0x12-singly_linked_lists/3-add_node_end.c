#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to the head node of the list_t list
 * @strr: string to be added to the new node
 * @new: new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new;
  list_t *temp = *head;
  unsigned int leng = 0;

  while (str[leng])
    leng++;

  new = malloc(sizeof(list_t));
  if (!new)
    return (NULL);

  new->str = strdup(str);
  new->len = leng;
  new->next = NULL;

  if (*head == NULL)
    {
      *head = new;
      return (new);
    }

  while (temp->next)
    temp = temp->next;

  temp->next = new;

  return (new);
}
