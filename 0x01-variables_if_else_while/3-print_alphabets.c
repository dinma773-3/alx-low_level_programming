#include <stdio.h>

int main() {
    char letter = 'a';

    // print lowercase alphabet
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    
    letter = 'A';

    // print uppercase alphabet
    while (letter <= 'Z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}
