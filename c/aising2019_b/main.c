#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int N;
    int A;
    int B;
    int P[100];
    int i;
    int count;

    scanf("%d", &N);
    scanf("%d %d", &A, &B);
    for(i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }
    qsort(P, N, sizeof(P[0]), compare_int);

    count = 0;
    while(1) {
        for(i = 0; i < N; i++) {
            if(P[i] <= A && P[i] != -1) {
                P[i] = -1;
                break;
            }
        }
        if(i >= N) {
            break;
        }

        for(i = 0; i < N; i++) {
            if(P[i] >= (A+1) && P[i] <= B) {
                P[i] = -1;
                break;
            }
        }
        if(i >= N) {
            break;
        }

        for(i = 0; i < N; i++) {
            if(P[i] >= (B+1)) {
                P[i] = -1;
                count += 1;
                break;
            }
        }
        if(i >= N) {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
