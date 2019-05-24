#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if(A > B && A > C) {
        if(B > C) {
            printf("1\n2\n3\n");
        } else {
            printf("1\n3\n2\n");
        }
    } else if(B > A && B > C) {
        if(A > C) {
            printf("2\n1\n3\n");
        } else {
            printf("3\n1\n2\n");
        }
    } else {
        if(A > B) {
            printf("2\n3\n1\n");
        } else {
            printf("3\n2\n1\n");
        }
    }

    return 0;
}
