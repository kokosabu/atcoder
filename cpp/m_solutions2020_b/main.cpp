#include <iostream>
using namespace std;

int main()
{
    int A, B, C, K;

    cin >> A >> B >> C;
    cin >> K;

    for(int i = 0; i < K; i++) {
        if(B <= A) {
            B *= 2;
        } else {
            C *= 2;
        }
    }

    if(A < B && B < C) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
