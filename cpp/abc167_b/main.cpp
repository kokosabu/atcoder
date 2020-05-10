#include <iostream>

using namespace std;

int main()
{
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    if(A >= K) {
        cout << K << endl;
        return 0;
    }

    if((A+B) >= K) {
        cout << A << endl;
        return 0;
    }

    cout << A + (K-A-B)*-1 << endl;
    return 0;
}
