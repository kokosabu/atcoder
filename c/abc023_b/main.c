#include <stdio.h>

int main()
{
    int N;
    char S[100+1];
    char c;
    int i;

    scanf("%d", &N);
    if((N%2) == 0) {
        printf("-1\n");
        return 0;
    }

    scanf("%s", S);
    c = S[0];
    for(i = 1; i < N; i++) {
        if(c == 'a') {
            c = 'b';
        } else if(c == 'b') {
            c = 'c';
        } else {
            c = 'a';
        }

        if(S[i] != c) {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n", (N-1)/2);

    return 0;
}
