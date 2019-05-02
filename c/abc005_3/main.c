#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int N;
    int *A;
    int M;
    int *B;

    int i;
    int j;
    int k;

    scanf("%d", &T);
    scanf("%d", &N);
    A = (int *)malloc(sizeof(int) * N);
    for(i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &M);
    B = (int *)malloc(sizeof(int) * M);
    for(i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    if(M > N) {
        printf("no\n");
        free((void *)A);
        free((void *)B);
        return 0;
    }

    j = 0;
    k = 0;
    for(i = 0; i < M; i++) {
        for( ; j < N; j++) {
            if(A[j] <= B[i] && (A[j] + T) >= B[i]) {
                j += 1;
                k += 1;
                break;
            }
        }
        if(j == N) {
            break;
        }
    }

    if(k == M) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    free((void *)A);
    free((void *)B);
    return 0;
}
