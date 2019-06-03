#include <stdio.h>

int main()
{
    int N;
    char A[100000];
    int a;
    int i;
    int count;

    for(i = 0; i < 100000; i++) {
        A[i] = 0;
    }

    scanf("%d", &N);

    count = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &a);

        if(A[a-1] == 0) {
            A[a-1] = 1;
        } else {
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
