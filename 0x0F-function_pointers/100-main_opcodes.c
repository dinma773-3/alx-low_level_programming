#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  int bytes, index;
  char *array;

  if (argc != 2)
    {
      printf("Error\n");
      exit(1);
    } 

  bytes = atoi(argv[1]);

  if (bytes < 0)
    {
      printf("Error\n");
      exit(2);
    }

  array = (char *)main;

  for (index = 0; index < bytes; index++)
    {
      if (index == bytes - 1)
	{
	  printf("%02hhx\n", array[index]);
	  break;
	}
      printf("%02hhx ", array[index]);
    }
  return (0);
}
