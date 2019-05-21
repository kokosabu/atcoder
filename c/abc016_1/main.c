#include <stdio.h>

int main()
{
    int M;
    int D;

    scanf("%d %d", &M, &D);

    if((M%D) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
