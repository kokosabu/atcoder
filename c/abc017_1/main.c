#include <stdio.h>

int main()
{
    int s;
    int e;
    int sum;
    int i;

    sum = 0;
    for(i = 0; i < 3; i++) {
        scanf("%d %d", &s, &e);
        sum += (s/10) * e;
    }

    printf("%d\n", sum);

    return 0;
}
