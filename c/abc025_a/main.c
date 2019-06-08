#include <stdio.h>

int main()
{
    char S[5+1];
    int N;

    scanf("%s", S);
    scanf("%d", &N);

    printf("%c%c\n", S[(N-1)/5], S[(N-1)%5]);

    return 0;
}
