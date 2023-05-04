#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
  if (index >= sizeof(unsigned long int) * 8)
    return (-1);

  *n = (*n & ~(1UL << index));
  return (1);
}
