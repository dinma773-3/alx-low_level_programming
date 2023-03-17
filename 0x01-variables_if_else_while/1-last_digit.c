#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand();

    printf("Last digit of %d is ", n);
    
    int last_digit = n % 10;
    
    if (last_digit > 5) {
        printf("%d and is greater than 5\n", last_digit);
    } else if (last_digit == 0) {
        printf("0\n");
    } else {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }

    return 0;
}
