#include <stdio.h>

int main()
{
    int N;
    int A;
    int B;
    int i;
    int j;
    int answer;
    int sum;

    scanf("%d %d %d", &N, &A, &B);

    answer = 0;
    for(i = 1; i <= N; i++) {
        sum = 0;
        j = i;
        while(j != 0) {
            sum += j % 10;
            j   -= j % 10;
            j   /= 10;
        }
        if(sum >= A && sum <= B) {
            answer += i;
        }
    }

    printf("%d\n", answer);

    return 0;
}
