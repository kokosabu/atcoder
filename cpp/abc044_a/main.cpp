#include <iostream>
using namespace std;

int main()
{
    int N, K, X, Y;
    cin >> N;
    cin >> K;
    cin >> X;
    cin >> Y;
    if(N <= K) {
        cout << X*N << endl;
    } else {
        cout << (X*K) + (Y*(N-K)) << endl;
    }
    return 0;
}
