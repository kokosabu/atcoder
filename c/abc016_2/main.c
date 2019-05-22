#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int plus;
    int minus;

    scanf("%d %d %d", &A, &B, &C);

    if((A+B) == C) {
        plus = 1;
    } else {
        plus = 0;
    }

    if((A-B) == C) {
        minus = 1;
    } else {
        minus = 0;
    }

    if(plus & minus) {
        printf("?\n");
    } else if(plus & (!minus)) {
        printf("+\n");
    } else if((!plus) & minus) {
        printf("-\n");
    } else {
        printf("!\n");
    }

    return 0;
}
