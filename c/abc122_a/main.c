#include <stdio.h>

int main()
{
    char b;
    char out;

    scanf("%c", &b);

    if(b == 'A') {
        out = 'T';
    } else if(b == 'T') {
        out = 'A';
    } else if(b == 'G') {
        out = 'C';
    } else {
        out = 'G';
    }

    printf("%c\n", out);

    return 0;
}
