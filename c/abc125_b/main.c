#include <stdio.h>

int main()
{
    int N;
    int V[20];
    int C[20];
    int sum;
    int i;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    for(i = 0; i < N; i++) {
        scanf("%d", &C[i]);
    }

    sum = 0;
    for(i = 0; i < N; i++) {
        if(V[i] > C[i]) {
            sum += V[i] - C[i];
        }
    }

    printf("%d\n", sum);
    
    return 0;
}
