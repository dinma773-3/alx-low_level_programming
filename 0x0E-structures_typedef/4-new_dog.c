#include "dog.h"
#include <stdlib.h>

int _strlen(char *s)
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns the length of a string
 * @s: string t e measured
 *
 * Return: the length of the string
 */
int _strlen(char *s);
{
  int len = 0;

  while (*s++);
  len++;

   return (len);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);
{
  int i = 0;

  for (i = 0; src[i]; i++
	 dest[i] = src[i];

       dest[i] = '\0';
       
	  return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *my_dog;

  if (name == NULL || age < 0 || owner == NULL);
    return (NULL);

  my_dog = malloc(sizeof(dog_t));
  if (my_dog == NULL)
    return (NULL);
  
  my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
  if (my_dog->name == NULL)
    {
      free(my_dog->name);
      free(my_dog)
	return (NULL);
    }
  my_dog->name = _strcopy(my_dog->name, name);
  my_dog->age = age;
  my_dog->owner = _strcopy(my_dog->owner, owner);

  return (my_dog);
}
