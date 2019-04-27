#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int r;

    r = a % b;

    if(r == 0) {
        return b;
    } else {
        return gcd(b, r);
    }
}

int main()
{
    int N;
    int *A;
    int i;
    int j;
    int answer;
    int g;
    int max_g;
    int left;
    int mid;
    int right;
    int left_g;
    int right_g;

    scanf("%d", &N);
    A = (int *)malloc(sizeof(int) * N);

    for(i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if(N == 2) {
        if(A[0] > A[1]) {
            answer = A[0];
        } else {
            answer = A[1];
        }
    } else if(N < 10) {
        answer = 0;
        for(i = 0; i < N; i++) {
            if(i == 0) {
                g = A[1];
            } else {
                g = A[0];
            }
            for(j = 0; j < N; j++) {
                if(i == j) {
                    continue;
                }
                if(g >= A[j]) {
                    g = gcd(g, A[j]);
                } else {
                    g = gcd(A[j], g);
                }
            }
            if(answer < g) {
                answer = g;
            }
        }
    } else {
        left = 0;
        right = N;
        mid = (left + right)/2;

        g = A[left];
        for(i = left+1; i < mid; i++) {
            if(g >= A[i]) {
                g = gcd(g, A[i]);
            } else {
                g = gcd(A[i], g);
            }
        }
        left_g = g;

        g = A[mid];
        for(i = mid+1; i < right; i++) {
            if(g >= A[i]) {
                g = gcd(g, A[i]);
            } else {
                g = gcd(A[i], g);
            }
        }
        right_g = g;

        while(1) {
            //printf("%d - %d - %d\n", left_g, answer, right_g);
            //printf("%d:%d:%d\n", left, mid, right);
            if(left_g == right_g) {
                answer = left_g;
                break;
            } else if(left_g > right_g) {
                answer = left_g;
                left = mid;
                mid = (left + right)/2;
            } else {
                answer = right_g;
                right = mid;
                mid = (left + right)/2;
            }
            if(left == mid) {
                break;
            }

            g = answer;
            for(i = left; i < mid; i++) {
                if(g >= A[i]) {
                    g = gcd(g, A[i]);
                } else {
                    g = gcd(A[i], g);
                }
            }
            left_g = g;

            g = answer;
            for(i = mid; i < right; i++) {
                if(g >= A[i]) {
                    g = gcd(g, A[i]);
                } else {
                    g = gcd(A[i], g);
                }
            }
            right_g = g;
        }

        // 前半と、後半にわける
        // 前半の最大公約数
        // 後半の最大公約数
        // を求める
        //
        // 前半と後半を比較し、小さい方に取り替えたい値がある。
        // ( 大きい方は、最大公約数として運用する )
    }

    printf("%d\n", answer);

    free((void *)A);

    return 0;
}
