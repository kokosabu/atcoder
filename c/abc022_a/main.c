#include <stdio.h>

int main()
{
    int N;
    int S;
    int T;
    int W;
    int A;
    int i;
    int count;

    scanf("%d %d %d", &N, &S, &T);

    scanf("%d", &W);
    count = 0;
    if((S <= W) && (W <= T)) {
        count += 1;
    }

    for(i = 1; i < N; i++) {
        scanf("%d", &A);
        W += A;
        if((S <= W) && (W <= T)) {
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
