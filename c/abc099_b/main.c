#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int i;

    scanf("%d %d", &a, &b);
    c = b - a;

    d = 0;
    for(i = 1; i <= c; i++) {
        d += i;
    }

    printf("%d\n", d - b);

    return 0;
}
