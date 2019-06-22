#include <stdio.h>

int main()
{
    unsigned long long A;
    unsigned long long B;
    unsigned long long C;
    unsigned long long D;
    unsigned long long all;
    unsigned long long C_num;
    unsigned long long D_num;
    unsigned long long CD_num;
    unsigned long long lcm;
    unsigned long long gcd;
    unsigned long long tmp;
    unsigned long long tmp_C;
    unsigned long long tmp_D;
    int i;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if(C < D) {
        tmp_C = D;
        tmp_D = C;
    } else {
        tmp_C = C;
        tmp_D = D;
    }
    gcd = tmp_C % tmp_D;
    while(gcd != 0) {
        tmp_C = tmp_D;
        tmp_D = gcd;
        gcd = tmp_C % tmp_D;
    }
    gcd = tmp_D;
    lcm = C * D / gcd;

    all = B - A + 1;

    C_num = (B / C) - ((A-1) / C);
    D_num = (B / D) - ((A-1) / D);
    CD_num = (B / lcm) - ((A-1) / lcm);

    //printf("%lld %lld %lld %lld\n", all, C_num, D_num, CD_num);
    printf("%lld\n", all - C_num - D_num + CD_num);

    return 0;
}
