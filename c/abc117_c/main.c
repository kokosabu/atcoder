#include <stdio.h>
#include <stdlib.h>

int int_comp(const void *a, const void *b)
{
    return (*(int *)a) - (*(int *)b);
}

int main()
{
    int N;
    int M;
    int X[100000];
    int diff[100000];
    int i;
    int sum;
    int ret;

    scanf("%d %d", &N, &M);
    for(i = 0; i < M; i++) {
        scanf("%d", &X[i]);
    }

    if(N >= M) {
        printf("0\n");
        return 0;
    }

    qsort(&(X[0]), M, sizeof(X[0]), int_comp);
    for(i = 0; i < M-1; i++) {
        diff[i] = X[i+1] - X[i];
    }

    qsort(&(diff[0]), M-1, sizeof(diff[0]), int_comp);
    sum = 0;
    for(i = 0; i < M-N; i++) {
        sum += diff[i];
    }

    printf("%d\n", sum);

    return 0;
}
