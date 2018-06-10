#include <stdio.h>

int main()
{
    int N;
    int d[12] = {
        1, 6, 9, 36, 81, 216, 729, 1296, 6561, 7776, 46656, 59049
    };
    int i;
    int x;

    scanf("%d", &N);

    x = 0;
    for(i = 11; i >= 0; i--) {
        //printf("%d %d %d\n", x, N, d[i]);
        x += N / d[i];
        N %= d[i];
        if(i == 1 && (N > 3)) {
            N -= 3;
            x += 1;
        }
    }

    printf("%d\n", x);

    return 0;
}
