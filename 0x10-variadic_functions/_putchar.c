#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
