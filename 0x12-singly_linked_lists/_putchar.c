#include <unistd.h>

/**
 * writes a character to the standard output
 */
int _putchar(char c)
{
  return write(1, &c, 1);
}
