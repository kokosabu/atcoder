#include <stdio.h>

int main()
{
    int n;
    int X;
    int a;
    int sum;
    int i;
    int d;

    scanf("%d %d", &n, &X);

    d = 1;
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        if((X&d) != 0) {
            sum += a;
        }
        d *= 2;
    }

    printf("%d\n", sum);

    return 0;
}
