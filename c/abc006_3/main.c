#include <stdio.h>

int main()
{
    int N;
    int M;
    int adult;
    int old_man;
    int child;

    scanf("%d %d", &N, &M);

    if((2*N) > M) {
        printf("-1 -1 -1\n");
        return 0;
    }
    if((4*N) < M) {
        printf("-1 -1 -1\n");
        return 0;
    }

    child = (M-2*N) / 2;
    old_man = (M-2*N)%2;
    adult = N - old_man - child;

    printf("%d %d %d\n", adult, old_man, child);

    return 0;
}
