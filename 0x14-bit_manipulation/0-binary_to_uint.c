#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *        there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int bi_num = 0;
  unsigned int bit = 1;
  int j;

  if (b == NULL)
    return (0);

  for (j = 0; b[j] != '\0'; j++)
    {
      if (b[j] == '1')
        bi_num += bit;
      else if (b[j] != '0')
        return (0);

      bit <<= 1;
    }
  return (bi_num);
}
