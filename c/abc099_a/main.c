#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    
    if(N <= 999) {
        printf("ABC\n");
    } else {
        printf("ABD\n");
    }

    return 0;
}
