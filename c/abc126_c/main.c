#include <stdio.h>

int main()
{
    int N;
    int K;
    int i;
    double rate;
    int score;
    int count;
    
    scanf("%d %d", &N, &K);

    rate = 0.0;
    for(i = 1; i <= N; i++) {
        score = i;
        for(count = 0; score < K; count++) {
            score <<= 1;
        }
        //rate += (long double)1.0 / (1 << count);
        rate += (long double)1.0 / (1 << count) / N;
    } 

    //printf("%.12Lf\n", rate / N);
    printf("%.12f\n", rate);

    return 0;
}

