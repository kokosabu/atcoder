#include <stdio.h>

int main()
{
    int c;

    while(1) {
        c = getchar();
        if(c == EOF || c == '\n') {
            break;
        }
        if(c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o') {
            putchar(c);
        }
    }
    putchar('\n');

    return 0;
}
