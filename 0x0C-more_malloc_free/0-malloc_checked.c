#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
  void *allocated_mem;

  allocated_mem = malloc(b);
  if (allocated_mem == NULL)
    {
      exit(98);
    }
  return (allocated_mem);
}
