#include <stdio.h>

int main()
{
    int N;
    int L;
    int i;
    int min;
    int abs;
    int sum;

    scanf("%d %d", &N, &L);

    sum = L;
    if(L >= 0) {
        min = L;
    } else {
        min = -L;
    }
    for(i = 1; i < N; i++) {
        sum += L + i;
        abs = L + i;
        if(abs < 0) {
            abs *= -1;
        }
        if(abs < min) {
            min = abs;
        }
    }

    if(sum < 0) {
        printf("%d\n", sum + min);
    } else {
        printf("%d\n", sum - min);
    }

    return 0;
}
