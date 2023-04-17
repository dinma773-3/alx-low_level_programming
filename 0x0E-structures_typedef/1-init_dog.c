#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises  a variable of type struct dog
 * @d: pointer to struct_dog initialization
 * @name: represents the dogs name
 * @age: represents the dogs age
 * @owner: represents the dogs ownerr
 * 
 * Descripttion: initializes a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
  if (d != NULL)
    {
  (*d).name = name;
    (*d).age = age;
    (*d).owner = owner;
    }
}
