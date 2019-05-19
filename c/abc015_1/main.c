#include <stdio.h>
#include <string.h>

int main()
{
    char A[50+1];
    char B[50+1];

    scanf("%s", A);
    scanf("%s", B);

    if(strlen(A) > strlen(B)) {
        printf("%s\n", A);
    } else {
        printf("%s\n", B);
    }

    return 0;
}

