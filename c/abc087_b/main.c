#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int X;
    int answer;
    int use_a;
    int use_b;
    int use_c;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &X);

    answer = 0;

    for(use_a = 0; use_a <= A; use_a++) {
        for(use_b = 0; use_b <= B; use_b++) {
            for(use_c = 0; use_c <= C; use_c++) {
                if(X == (use_a * 500) + (use_b * 100) + (use_c * 50)) {
                    answer++;
                }
            }
        }
    }


    printf("%d\n", answer);

    return 0;
}
