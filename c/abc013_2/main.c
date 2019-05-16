#include <stdio.h>

int main()
{
    int a;
    int b;
    int diff;
    scanf("%d", &a);
    scanf("%d", &b);
    diff = a - b;
    if(diff < 0) {
        diff *= -1;
    }

    if(diff > 5) {
        printf("%d\n", 10-diff);
    } else {
        printf("%d\n", diff);
    }
    
    return 0;
}
