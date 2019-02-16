#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0) {
        return a;
    }

    return gcd(b, a%b);
}

int main()
{
    int N;
    int A1;
    int A2;
    int i;

    scanf("%d", &N);
    scanf("%d", &A1);
    for(i = 1; i < N; i++) {
        scanf("%d", &A2);
        A1 = gcd(A1, A2);
    }

    printf("%d\n", A1);

    return 0;
}
