#include <stdio.h>

int main()
{
    long long K;
    long long A;
    long long B;

    scanf("%lld %lld %lld", &K, &A, &B);

    if(A >= B) {
        printf("%lld\n", 1 + K);
        return 0;
    }

    if((B-A) == 1) {
        printf("%lld\n", 1 + K);
        return 0;
    }

    K -= (A-1);
    if((K%2) == 1) {
        printf("%lld\n", A+(B-A)*(K/2) + 1);
    } else {
        printf("%lld\n", A+(B-A)*(K/2));
    }

    return 0;
}
