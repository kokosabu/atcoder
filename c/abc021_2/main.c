#include <stdio.h>

int main()
{
    int N;
    int a, b;
    int K;
    int P;
    int towns[100];
    int i;
    int flag;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        towns[i] = 0;
    }

    scanf("%d %d", &a, &b);
    towns[a-1] = 1;
    towns[b-1] = 1;

    scanf("%d", &K);

    flag = 0;
    for(i = 0; i < K; i++) {
        scanf("%d", &P);
        if(towns[P-1] == 1) {
            flag = 1;
        } else {
            towns[P-1] = 1;
        }
    }

    if(flag) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
