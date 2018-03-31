#include <stdio.h>

int main()
{
    int N;
    int a[100];
    int i;
    int j;
    int tmp;
    int alice;
    int bob;

    (void)scanf("%d", &N);

    for(i = 0; i < N; i++) {
        (void)scanf("%d", &a[i]);
    }

    for(i = 0; i < N-1; i++) {
        for(j = i+1; j < N; j++) {
            if(a[i] < a[j]) {
                tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    alice = 0;
    bob   = 0;
    for(i = 0; i < N; i++) {
        if(i%2 == 0) {
            alice += a[i];
        } else {
            bob   += a[i];
        }
    }

    printf("%d\n", alice - bob);

    return 0;
}
