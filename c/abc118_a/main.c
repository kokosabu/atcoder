#include <stdio.h>

int main()
{
    int A;
    int B;

    scanf("%d %d", &A, &B);

    if((B%A) == 0) {
        printf("%d\n", A + B);
    } else {
        printf("%d\n", B - A);
    }

    return 0;
}
