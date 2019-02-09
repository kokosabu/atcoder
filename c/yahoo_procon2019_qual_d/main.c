#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    int *A;
    int i;
    int pattern1;
    int pattern2;
    int pattern3;
    int left;
    int right;

    scanf("%d", &L);

    A = (int *)malloc(sizeof(int) * L);
    for(i = 0; i < L; i++) {
        scanf("%d", &A[i]);
    }

    //端のゼロは無視
    for(i = 0; i < L; i++) {
        if(A[i] != 0) {
            break;
        }
    }
    left = i;

    for(i = L-1; i >= 0; i--) {
        if(A[i] != 0) {
            break;
        }
    }
    right = i + 1;

    //左からゼロまで( 端は無視しつつ、偶数は+1, みていない箇所はそのまま )
    pattern1 = 0;
    for(i = left+1; i < right; i++) {
        if(A[i] == 0) {
            break;
        }
        if((A[i]%2) == 0 && (i+1) < right && A[i+1] != 0) {
            pattern1 += 1;
            while((A[i+1]%2) == 0 && i < right) {
                i += 1;
            }
        }
    }
    for( ; i < right; i++) {
        pattern1 += A[i];
    }

    //右からゼロまで( 端は無視しつつ、偶数は+1, みていない箇所はそのまま )
    pattern2 = 0;
    for(i = right-2; i >= left; i--) {
        if(A[i] == 0) {
            break;
        }
        if((A[i]%2) == 0 && (i-1) >= left && A[i-1] != 0) {
            pattern2 += 1;
            while((A[i-1]%2) == 0 && i >= left) {
                i -= 1;
            }
        }
    }
    for( ; i >= left; i--) {
        pattern2 += A[i];
    }

    //左から右まで( 端は無視しつつ、偶数および0は +1 )
    pattern3 = 0;
    for(i = left+1; i <= right; i++) {
        if((A[i]%2) == 0) {
            pattern3 += 1;
            while((A[i+1]%2) == 0) {
                i += 1;
            }
        }
    }
    
    // o o e e o
    //     a b
    //       a b
    //       b a
    //     b a
    //     a b
    //

    if(pattern1 <= pattern2 && pattern1 <= pattern3) {
        printf("%d\n", pattern1);
    } else if(pattern2 <= pattern3) {
        printf("%d\n", pattern2);
    } else {
        printf("%d\n", pattern3);
    }

    free((void *)A);

    return 0;
}
