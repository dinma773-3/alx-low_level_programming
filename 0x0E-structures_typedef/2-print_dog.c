#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - that prints values of a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d) {
  if (d != NULL)
    {
      printf("Name: %\nAge: %f\nOwner: %s\n",
	     d->name != NULL ? d->name : "(nil)",
	     d->age,
	     d->owner != NULL ? d->owner : "(nil)");
    }
}
