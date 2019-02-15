#include <stdio.h>

int main()
{
    int X;
    int Y;

    (void)scanf("%d %d", &X, &Y);

    if(X > Y) {
        printf("%d\n", X);
    } else {
        printf("%d\n", Y);
    }

    return 0;
}
