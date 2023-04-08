#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */

int _atoi(char *s) {
    int sign = 1;
    int result = 0;
    int i = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        result = result * 10 + s[i] - '0';
        i++;
    }

    return sign * result;
}

/**
 * main - Multiplies two numbers and prints the result
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings passed as arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[]) {
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    result = num1 * num2;

    printf("%d\n", result);

    return 0;
}
