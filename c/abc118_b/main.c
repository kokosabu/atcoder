#include <stdio.h>

int main()
{
    int N;
    int M;
    int K;
    int A;
    int i;
    int j;
    int type[30];
    int count;

    scanf("%d %d", &N, &M);
    for(i = 0; i < M; i++) {
        type[i] = 0;
    }

    for(i = 0; i < N; i++) {
        scanf("%d", &K);
        for(j = 0; j < K; j++) {
            scanf("%d", &A);
            type[A-1] += 1;
        }
    }

    count = 0;
    for(i = 0; i < M; i++) {
        if(type[i] == N) {
            count += 1;
        }
    }
    printf("%d\n", count);

    return 0;
}
