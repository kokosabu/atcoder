#include <stdio.h>

int main()
{
    int N;
    int K;
    char S[50+1];

    scanf("%d %d", &N, &K);
    scanf("%s", S);

    S[K-1] = S[K-1] - 'A' + 'a';

    printf("%s\n", S);

    return 0;
}

