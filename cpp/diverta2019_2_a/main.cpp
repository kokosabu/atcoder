#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    if(K == 1) {
        cout << 0 << endl;
    } else if(N == K) {
        cout << 0 << endl;
    } else {
        cout << (N - K) << endl;
    }
    return 0;
}
