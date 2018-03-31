#include <stdio.h>

int main()
{
    int N;
    int A;
    int count;
    int answer;
    int i;

    scanf("%d", &N);

    answer = 31;
    for(i = 0; i < N; i++) {
        scanf("%d", &A);

        count = 0;
        while((A%2) == 0 && count < answer)  {
            A >>= 1;
            count += 1;
        }
        answer = count;
    }

    printf("%d\n", answer);

    return 0;
}
