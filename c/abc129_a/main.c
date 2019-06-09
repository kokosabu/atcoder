#include <stdio.h>

int main()
{
    int P;
    int Q;
    int R;

    scanf("%d %d %d", &P, &Q, &R);
    if((P >= Q) && (P >= R)) {
        printf("%d\n", Q + R);
    } else if((Q >= P) && (Q >= R)) {
        printf("%d\n", P + R);
    } else {
        printf("%d\n", P + Q);
    }

    return 0;
}
