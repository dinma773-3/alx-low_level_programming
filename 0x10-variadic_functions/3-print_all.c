#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints anything
 * @format: is a list of types of arguments passed to the function
 * @c: char
 * @i: integer
 * @f: float
 * @s: char  (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
  va_list list;
  unsigned int i = 0, p;
  char *string;

  va_start(list, format);

  while (format && format[i])
    {
      p = 1;
      switch (format[i])
	{
	case 'c':
	  printf("%c", va_arg(list, int));
	  break;
	case 'i':
	  printf("%d", va_arg(list, int));
	  break;
	case 'f':
	  printf("%f", va_arg(list, double));
	  break;
	case 's':
	  string = va_arg(list, char *);
	  if (!string)
	    {
	      printf("(nil)");
	      break;
	    }
	  printf("%s", string);
	  break;
	default:
	  p = 0;
	  break;
	}
      if (p && format[i + 1])
	printf(", ");
      i++;
    }
  printf("\n");

  va_end(list);
}
