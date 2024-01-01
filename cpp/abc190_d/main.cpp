#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    int count = 1; // same N

    long long d = 2;
    while(1) {
        if(N/d < d) {
            break;
        }
        if((d%2) == 0) {
            if((N%d) == (N/d)) {
                    count += 1;
                    // cout << count << " : " << d << " : ";
                    // for(long long k = N/d-(d/2-1); k < N/d+(d/2-1); k++) {
                    //     cout << k << ", ";
                    // }
                    // cout << endl;
            }
        } else {
            if((N%d) == 0) {
                    count += 1;
                    // cout << count << " : " << d << " : ";
                    // for(long long k = N/d-(d-1)/2; k < N/d+(d-1)/2; k++) {
                    //     cout << k << ", ";
                    // }
                    // cout << endl;
            }
        }
        d += 1;
    }

    cout << count*2 << endl;
    return 0;
}
