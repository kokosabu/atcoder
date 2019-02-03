#include <stdio.h>

int main()
{
    int N;
    int L;
    int max;
    int i;
    int sum;

    scanf("%d", &N);
    sum = 0;
    max = -1;
    for(i = 0; i < N; i++) {
        scanf("%d", &L);
        sum += L;
        if(max < L) {
            max = L;
        }
    }

    if(max < (sum-max)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
