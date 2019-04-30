#include <stdio.h>

int main()
{
    int N;
    int cards[6];
    int tmp;
    int i;

    for(i = 0; i < 6; i++) {
        cards[i] = i + 1;
    }

    scanf("%d", &N);

    N = N % 30;
    for(i = 0; i < N; i++) {
        tmp = cards[i%5];
        cards[i%5] = cards[i%5 + 1];
        cards[i%5 + 1] = tmp;
    }

    for(i = 0; i < 6; i++) {
        printf("%d", cards[i]);
    }
    printf("\n");

    return 0;
}
