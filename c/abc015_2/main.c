#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int A;
    int count;
    int sum;
    int i;

    scanf("%d", &N);
    count = 0;
    sum = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &A);
        if(A != 0) {
            count += 1;
            sum += A;
        }
    }

    printf("%d\n", (int)ceil((double)sum / count));

    return 0;
}
