#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of command line arguments passed to the program
 *  @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings passed as arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]) {
  printf("%d\n", argc - 1);

    return (0);
}
