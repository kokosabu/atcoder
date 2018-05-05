#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int k;
    int i;
    
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &k);

    if(a >= b && a >= c) {
        for(i = 0; i < k; i++) {
            a <<= 1;
        }
    } else if(b >= c) {
        for(i = 0; i < k; i++) {
            b <<= 1;
        }
    } else {
        for(i = 0; i < k; i++) {
            c <<= 1;
        }
    }
    printf("%d\n", a + b + c);

    return 0;
}
