#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to the head of the list_t list
 * @str: strin to be added to the new node
 *
 * Return: the address of the new element, or NULL if it faile
 */
list_t *add_node(list_t **head, const char *str)
{
  list_t *new;
  size_t p = 0;

  new = malloc(sizeof(list_t));
  if (new == NULL)
    return(NULL);

  new->str = strdup(str);
  if (new->str == NULL)
    {
      free(new);
      return (NULL);
    }

  for (p = 0; new->str[p]; p++);

  new->len = p;
  new->next = *head;
  *head = new;

  return (new);
}
