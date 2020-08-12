#include <iostream>
using namespace std;

int main()
{
    int L, H;
    int N;

    cin >> L >> H;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;

        if(A < L) {
            cout << L-A << endl;
        } else if(A <= H) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
