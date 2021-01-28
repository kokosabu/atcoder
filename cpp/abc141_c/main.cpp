#include <iostream>
using namespace std;

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;
    int points[N];
    for(int i = 0; i < N; i++) {
        points[i] = 0;
    }
    for(int i = 0; i < Q; i++) {
        int A;
        cin >> A;
        points[A-1] += 1;
    }
    for(int i = 0; i < N; i++) {
        if((K-Q+points[i]) > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
