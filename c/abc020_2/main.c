#include <stdio.h>

int main()
{
    int A;
    int B;
    int x;

    scanf("%d %d", &A, &B);

    for(x = 10; x < 1000; x *= 10) {
        if((B/x) == 0) {
            break;
        }
    }

    printf("%d\n", ((A*x)+B)*2);

    return 0;
}
