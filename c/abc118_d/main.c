#include <stdio.h>
#include <stdlib.h>

int use[10] = {-1, 2, 5, 5, 4, 5, 6, 3, 7, 6};
//                 1  2  3  4  5  6  7  8  9

int comp(const void *a, const void *b)
{
    return *((int *)b) - *((int *)a);
}

int comp2(const void *a, const void *b)
{
    int x;
    int y;
    x = *((int *)b) - *((int *)a);
    y = use[*((int *)b)] - use[*((int *)a)];
    if(y > 0) {
        return 1;
    } else if(y == 0 && x > 0) {
        return 1;
    } else if(y == 0 && x == 0) {
        return 0;
    } else {
        return -1;
    }
}

int count_matchstick(int create[])
{
    int i;
    int ans;

    ans = 0;
    for(i = 0; i < 10; i++) {
        ans += use[i] * create[i];
    }

    return ans;
}

int main()
{
    int N;
    int M;
    int A[9];
    int i;
    int j;
    int create[10];
    int min;
    int minnum;
    int use_match;

    for(i = 0; i < 10; i++) {
        create[i] = 0;
    }

    scanf("%d %d", &N, &M);

    min = 7;
    minnum = 3;
    for(i = 0; i < M; i++) {
        scanf("%d", &A[i]);
        if(use[A[i]] < min || (use[A[i]] <= min && A[i] <= minnum)) {
            min = use[A[i]];
            minnum = A[i];
        }
    }

    qsort(A, M, sizeof(int), comp);

    // 桁を増やす
    create[minnum] = N / min;
    //N %= min;
    //printf("%d:%d\tN=%d\n", minnum, create[minnum], N);

    // 一個あたりの大きい数字を使用する
    for(i = 0; i < M; i++) {
        if(A[i] < minnum) {
            break;
        }
        if(use[A[i]] != min) {
            use_match = count_matchstick(create);
            if(use_match == N) {
                break;
            }
            //printf("N=%d, use_match=%d, A[i]=%d, min=%d\n(N-use_match)=%d, A[i]-min=%d\n", N, use_match, A[i], min, N-use_match, A[i]-min);
            create[minnum] -= (N - use_match) / (use[A[i]] - min);
            create[A[i]]   += (N - use_match) / (use[A[i]] - min);
        }
    }

    qsort(&A[i], M-i, sizeof(int), comp2);

    for(; i < M; i++) {
        if(use[A[i]] != min) {
            //printf("[%d] %d\n", i, A[i]);
            use_match = count_matchstick(create);
            //printf("%d\n", use_match);
            if(use_match == N) {
                break;
            }
            //printf("N=%d, use_match=%d, A[i]=%d, min=%d\n(N-use_match)=%d, A[i]-min=%d\n", N, use_match, A[i], min, N-use_match, A[i]-min);
            create[minnum] -= (N - use_match) / (use[A[i]] - min);
            create[A[i]]   += (N - use_match) / (use[A[i]] - min);
        }
    }

    // 大きい数字は左から並べる
    for(i = 9; i >= 0; i--) {
        //printf("%d %d\n", i, create[i]);
        for(j = 0; j < create[i]; j++) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}
