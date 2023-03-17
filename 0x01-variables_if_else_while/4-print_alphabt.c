#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              excluding 'q' and 'e', followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main() {
  char letter = 'a';
  while (letter <= 'z') {
    if (letter != 'e' && letter!= 'q'){
      putchar(letter);
    }
    letter++;
  }
  putchar ('\n');
  return 0;
}
