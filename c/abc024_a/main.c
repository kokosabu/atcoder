#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int K;
    int S;
    int T;

    scanf("%d %d %d %d", &A, &B, &C, &K);
    scanf("%d %d", &S, &T);

    if((S+T) >= K) {
        printf("%d\n", (A-C)*S + (B-C)*T);
    } else {
        printf("%d\n", A*S + B*T);
    }

    return 0;
}
