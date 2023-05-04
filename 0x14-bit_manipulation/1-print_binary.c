#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
  int j, counts = 0;
  unsigned long int curr_p;

  for (j = sizeof(unsigned long int) * 8 - 1; j >= 0; j--)
    {
      curr_p = n >> j;

      if (curr_p & 1)
	{
	  _putchar('1');
	  counts++;
	}
      else if (counts)
	_putchar('0');
    }
  if (!counts)
    _putchar('0');
}
