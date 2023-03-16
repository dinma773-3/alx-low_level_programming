#include <unistd.h>

int main(void)
{
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = 0;
    while (msg[len] != '\0')
    {
        len++;
    }
    write(2, msg, len);
    return 1;
}
