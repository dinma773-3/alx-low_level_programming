#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet with a new line at the end, using
 *              putchar only twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'm'; letter++)
    {
        putchar(letter);
    }

    for (letter = 'n'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
