#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unsigned long long chebyshev_distance = 0;
    unsigned long long sum = 0;
    unsigned long long sum2 = 0;
    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        if(x < 0) {
            x = -x;
        }
        if(x > chebyshev_distance) {
            chebyshev_distance = x;
        }
        sum += x;
        sum2 += x * x;
    }

    printf("%llu\n%.10f\n%llu\n", sum, sqrt(sum2), chebyshev_distance);

    return 0;
}
