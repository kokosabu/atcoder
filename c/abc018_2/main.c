#include <stdio.h>
#include <string.h>

int main()
{
    char S[100+1];
    int N;
    int l;
    int r;

    char T[100+1];
    int len;
    int i;
    int j;
    int k;

    scanf("%s", S);
    len = strlen(S);

    scanf("%d", &N);

#if 0
    for(j = 0; j < len; j++) {
        T[j] = S[j];
    }
#endif
    for(i = 0; i < N; i++) {
        scanf("%d %d", &l, &r);
        k = 0;
        for(j = l-1; j < r; j++) {
            T[j] = S[r-k-1];
            k++;
            //printf("[%d][%d] %s : %s\n", i, j, S, T);
        }
        for(j = l-1; j < r; j++) {
            S[j] = T[j];
        }
        //printf("[%d] %s : %s\n", i, S, T);
    }

    printf("%s\n", S);

    return 0;
}

