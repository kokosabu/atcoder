#include <iostream>
using namespace std;

int main()
{
    int N, K, M;
    cin >> N >> K >> M;

    int sum = 0;
    for(int i = 0; i < N-1; i++) {
        int A;
        cin >> A;
        sum += A;
    }

    int target_sum = M * N;
    int diff = target_sum - sum;

    if(diff > K) {
        cout << -1 << endl;
    } else if(diff < 0) {
        cout << 0 << endl;
    } else {
        cout << diff << endl;
    }

    return 0;
}
