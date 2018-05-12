#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    int *p;
    int *memo;
    int *x;
    int *y;
    int i;
    int j;

    scanf("%d %d", &N, &M);

    p = (int *)malloc(sizeof(int) * N);
    memo = (int *)malloc(sizeof(int) * N);
    for(i = 0; i < N; i++) {
        scanf("%d", &(p[i]));
        memo[i] = 0;
    }

    x = (int *)malloc(sizeof(int) * M);
    y = (int *)malloc(sizeof(int) * M);
    for(i = 0; i < M; i++) {
        scanf("%d %d", &(x[i]), &(y[i]));
    }

    int m = 1;
    memo[x[0]] = m;
    memo[y[0]] = m;
    for(i = 1; i < M; i++) {
        for(j = 0; j < N; j++) {
            if(p[j] == x[i] || p[j] == y[i]) {
                if(memo[x[i]] == 0 && memo[y[i]] == 0) {
                    m += 1;
                    memo[x[i]] = m;
                    memo[y[i]] = m;
                } else if(memo[x[i]] != 0 && memo[y[i]] != 0) {
                    int n = memo[y[i]];
                    for(int k = 0; k < N; k++) {
                        if(memo[k] == n) {
                            memo[k] = memo[x[i]];
                        }
                    }
                } else if(memo[x[i]] != 0) {
                    memo[y[i]] = memo[x[i]];
                } else if(memo[y[i]] != 0) {
                    memo[x[i]] = memo[y[i]];
                }
            }
        }
    }

    int count = 0;
    for(i = 1; i <= N; i++) {
        if(i == p[i-1]) {
            count += 1;
        } else if(memo[i-1] != 0) {
            for(j = 1; j <= N; j++) {
                if(memo[i-1] == memo[j-1] && i == p[j-1]) {
                    count += 1;
                    break;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
