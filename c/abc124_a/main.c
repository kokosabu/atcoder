#include <stdio.h>

int main()
{
    int A;
    int B;
    int coin;
    int i;

    scanf("%d %d", &A, &B);

    coin = 0;
    for(i = 0; i < 2; i++) {
        if(A >= B) {
            coin += A;
            A -= 1;
        } else {
            coin += B;
            B -=1;
        }
    }

    printf("%d\n", coin);

    return 0;
}
