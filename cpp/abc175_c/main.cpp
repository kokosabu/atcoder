#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long X, K, D;
    cin >> X >> K >> D;
    long long z = abs(X) / D;
    if(z >= K) {
        cout << abs(X) - (K*D) << endl;
    } else {
        K -= z;

        // cout << K << endl;
        // cout << abs(X) - (z*D) << endl;
        if((K%2) == 0) {
            cout << abs(X) - (z*D) << endl;
        } else {
            cout << D - (abs(X) - (z*D)) << endl;
        }
       
        /*
        if((D%2) == 0) {
            cout << abs(X) - (z*K) << endl;
        } else {
            cout << K - (abs(X) - (z*K)) << endl;
        }
        */
    }
    return 0;
}
