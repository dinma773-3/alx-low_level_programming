#include "main.h"

/**print_alphabet - print all alphabet in lowercase
 *Return: (0)
 **/

void print_alphabet(void) {
  char c = 'a';
  while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
  _putchar('\n');
  return (0);
}
