#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long m = 0;
    long long sumA = 0;
    long long sumA2 = 0;
    for (int i = 0; i < N; i++) {
        long long A;
        cin >> A;
        sumA += A;
        sumA2 += sumA;
        if(A > m) {
            m = A;
        }
        cout << sumA2 + m * (i + 1) << endl;
    }

    return 0;
}
