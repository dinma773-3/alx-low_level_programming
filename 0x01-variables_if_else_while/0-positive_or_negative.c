#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main() {
    srand(time(NULL));
    int n = rand() % RAND_MAX - RAND_MAX/2;

    printf("%d ", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
