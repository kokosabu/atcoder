#include <stdio.h>

int main()
{
    int N;
    int A;

    int i;
    int first;
    int second;

    scanf("%d", &N);

    first = 0;
    second = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &A);
        if(first < A) {
            second = first;
            first = A;
        } else if(second < A && A < first) {
            second = A;
        }
    }

    printf("%d\n", second);

    return 0;
}
