#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the cmp function does not return 0
 * @array
 * @size: is the number of elements in the array array
 * @cmp is a pointer to the function to be used to compare values
 *
 * Return -1 If no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int index;

  if (array == NULL || cmp == NULL || size <= 0)
    return (-1);

   for (index = 0; index < size; index++)
    {
      if (cmp(array[index]))
	return (index);
    }

   return (-1);
}
