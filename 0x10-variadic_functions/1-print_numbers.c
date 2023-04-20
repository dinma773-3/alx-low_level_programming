#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: other integers to print
 *
 * Return If separator is NULL, don’t print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list list;
  unsigned int index;

  va_start(list, n);

  for (index = 0; index < n; index++)
    {
      printf("%d", va_arg(list, int));
      if (separator != NULL && index < n - 1)
	printf("%s", separator);
    }

  printf("\n");

  va_end(list);
}
