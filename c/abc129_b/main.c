#include <stdio.h>

int main()
{
    int N;
    int W[100];
    int i;
    int T;
    int S1;
    int S2;
    int diff;
    int min;

    scanf("%d", &N);

    min = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &W[i]);
        min += W[i];
    }

    for(T = 0; T <= N; T++) {
        S1 = 0;
        for(i = 0; i <= T; i++) {
            S1 += W[i];
        }
        S2 = 0;
        for(; i < N; i++) {
            S2 += W[i];
        }
        diff = S1 - S2;
        if(diff < 0) {
            diff *= -1;
        }
        if(diff < min) {
            min = diff;
        }
    }

    printf("%d\n", min);

    return 0;
}
