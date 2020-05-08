#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> times(N);
    vector<long long> H(N);
    vector<long long> S(N);
    long long tmp;
    long long left = LLONG_MAX;
    long long right = LLONG_MIN;
    for(int i = 0; i < N; i++) {
        cin >> H[i] >> S[i];
        if(left > H[i]) {
            left = H[i];
        }
        tmp = H[i] + (S[i] * (N-1));
        if(right < tmp) {
            right = tmp;
        }
    }

    long long half;
    while((right-left) > 1) {
        half = (left + right) / 2;
        //cout << left << ", " << half << ", " << right << endl;
        bool is_success = true;
        for(int i = 0; i < N; i++) {
            if(half < H[i]) {
                is_success = false;
            }
            times[i] = (half - H[i]) / S[i];
        }
        sort(times.begin(), times.end());
        for(int i = 0; i < N; i++) {
            if(i > times[i]) {
                is_success = false;
                break;
            }
        }
        if(is_success) {
            right = half;
        } else {
            left = half;
        }
    }

    cout << right << endl;
    return 0;
}
