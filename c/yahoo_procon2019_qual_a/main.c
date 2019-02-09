#include <stdio.h>

int main()
{
    int N;
    int K;

    scanf("%d %d", &N, &K);
    
    if(((N+1)/2) >= K) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
