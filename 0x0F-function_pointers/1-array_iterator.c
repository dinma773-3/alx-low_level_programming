#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: a pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  size_t p;
    
  if (array != NULL || action != NULL)
    {
  for (p = 0; p < size; p++)
    {
      action(array[p]);
    }
    }
}
