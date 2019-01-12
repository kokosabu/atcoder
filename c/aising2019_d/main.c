#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int Q;
    int A[100000];
    char flg[100000];
    int X;
    int i;
    int j;
    long long sum;
    int near;
    int tmp;

    scanf("%d %d", &N, &Q);
    for(i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < Q; i++) {
        scanf("%d", &X);

        for(j = 0; j < N; j++) {
            flg[j] = 0;
        }
        sum = 0;

        while(1) {
            // takahashi
            for(j = N-1; j >= 0; j--) {
                if(flg[j] == 0) {
                    sum += A[j];
                    flg[j] = 1;
                    break;
                }
            }

            tmp = 0;
            for(j = 0; j < N; j++) {
                tmp += flg[j];
            }
            if(tmp == N) {
                break;
            }

            // aoki
            for(j = 0; j < N; j++) {
                if(flg[j] == 0) {
                    near = j;
                    break;
                }
            }
            for(j = j + 1; j < N; j++) {
                if(flg[j] == 0) {
                    if(abs(X-A[j]) == abs(X-A[near]) && A[near] >= A[j]) {
                        near = j;
                    } else if(abs(X-A[j]) < abs(X-A[near])) {
                        near = j;
                    }
                }
            }
            flg[near] = 1;

            tmp = 0;
            for(j = 0; j < N; j++) {
                tmp += flg[j];
            }
            if(tmp == N) {
                break;
            }
        }
        printf("%lld\n", sum);
    }

    return 0;
}
