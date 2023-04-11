#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
    char *str_dup;
     int i = 0, p = 0;

   if (str == NULL)
     	return (NULL);
       
   while (str[i] != '\0')
		i++;

      str_dup = malloc(sizeof(char) * (i + 1));

   if (str_dup == NULL)
     return (NULL);

   for (p = 0; str[p]; p++)
	       str_dup[p] = str[p];

   str_dup[p] = '\0';

   return (str_dup);
}
