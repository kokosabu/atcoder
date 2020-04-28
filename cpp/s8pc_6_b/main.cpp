#include <algorithm>
#include <cmath>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int N;
    int A[30], B[30];
    long long time;
    long long min_time_a;
    long long min_time_b;
    long long min_time_c;
    cin >> N;
    min_time_c = 0;
    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        min_time_c += B[i] - A[i];
    }

    min_time_a = LLONG_MAX;
    for(int i = 0; i < N; i++) {
        time = 0;
        for(int j = 0; j < N; j++) {
            time += abs(A[i] - A[j]);
        }
        if(time < min_time_a) {
            min_time_a = time;
        }
    }
    min_time_b = LLONG_MAX;
    for(int i = 0; i < N; i++) {
        time = 0;
        for(int j = 0; j < N; j++) {
            time += abs(B[i] - B[j]);
        }
        if(time < min_time_b) {
            min_time_b = time;
        }
    }
    cout << (min_time_a + min_time_b + min_time_c) << endl;
    return 0;
}
