#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings 
 * @s1: string one
 * @s2: string two
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2) {
  char *concat;
unsigned int i, p;

 if (s1 == NULL)
  s1 == " ";
 if (s2 == NULL)
  s2 = " ";

  i = p = 0

    while (s1[i] != '\0')
      i++;
  while (s2[p] != '\0')
    p++;
  concat = malloc(sizeof(char) + (i + p + 1));

		  if (concat == NULL)
		    return (NULL)
		      i = p = 0;
		  while (s1[i] != '\0') {
		    concat[i] = s1[i];
		    i++;
		  }
		  while (s2[p] != '\0') {
		    concat[i] = s2[p];
		    i++, p++;
		  }
		  concat[i] = '\0';
	return (concat);
}
