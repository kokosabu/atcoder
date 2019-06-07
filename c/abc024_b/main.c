#include <stdio.h>

int main()
{
    int N;
    int T;
    int A;
    int old_A;
    int i;
    long long int output;

    scanf("%d %d", &N, &T);

    scanf("%d", &A);

    if(N == 1) {
        printf("%d\n", T);
        return 0;
    }

    old_A = A;
    output = 0;
    for(i = 1; i < N; i++) {
        scanf("%d", &A);

        if((old_A + T) > A) {
            output += (A - old_A);
        } else {
            output += T;
        }

        old_A = A;
    }

    output += T;
    printf("%lld\n", output);

    return 0;
}
