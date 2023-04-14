#include <stdlib>
#include "main.h"

/**
 * _calloc -  allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return a pointer to the allocated memory
 *        if fails exit
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *nem;
  int j;

  if (nem == 0 || size == 0)
    return (NULL);

  nem = malloc(nmemb * size);

	if (nem == NULL) {
		free(nem);
		exit(98);
	}

	for (j = 0; j < nmemb * size; j++)
		*((char *)nem + j) = 0;

	return (nem);
}
