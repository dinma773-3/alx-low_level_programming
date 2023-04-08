#include <stdio.h>
#include "main.h"

/**
 *main - Prints all command line arguments
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings passed as arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]) {
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
