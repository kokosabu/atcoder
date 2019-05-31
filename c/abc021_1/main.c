#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    printf("%d\n", (N/2) + (N%2));

    if((N%2) == 1) {
        printf("1\n");
        N -= 1;
    }

    while(N > 0) {
        printf("2\n");
        N -= 2;
    }

    return 0;
}
