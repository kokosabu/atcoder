#include <stdio.h>

int main()
{
    unsigned long long a0;
    unsigned long long a1;
    unsigned long long a2;
    unsigned long long new;
    int n;
    int i;

    scanf("%d", &n);

    if(n == 1 || n == 2) {
        printf("0\n");
        return 0;
    }

    if(n == 3) {
        printf("1\n");
        return 0;
    }

    a0 = 0;
    a1 = 0;
    a2 = 1;
    for(i = 4; i <= n; i++) {
        new = a0 + a1 + a2;
        a0 = a1;
        a1 = a2;
        a2 = new % 10007;
        //printf("[%d] %lld:%lld\n", i, a2, a2%10007);
    }

    printf("%lld\n", a2);

    return 0;
}
