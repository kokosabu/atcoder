#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *((double *)b) - *((double *)a);
}

int main()
{
    int N;
    int K;
    double C;
    double R[100];
    int i;

    scanf("%d %d", &N, &K);
    for(i = 0; i < N; i++) {
        scanf("%lf", &R[i]);
    }

    qsort(R, N, sizeof(double), cmp);

    for(i = K-1; i >= 0; i--) {
        C = (C + R[i]) / 2;
    }

    printf("%.6f\n", C);

    return 0;
}
