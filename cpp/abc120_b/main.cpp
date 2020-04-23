#include <iostream>
using namespace std;

int main()
{
    int A, B, K;
    int g[100];
    int i;
    int k;
    cin >> A >> B >> K;

    k = 0;
    for(i = 1; i<=A && i<= B ; i++) {
        if(A%i == 0 && B%i == 0) {
            g[k] = i;
            k += 1;
        }
    }

    //for(i = 0; i < k; i++) {
    //    cout << "i: [" << i << "] " << g[i] << endl;
    //}
    //cout << k << endl;
    //cout << K << endl;

    cout << g[k-K] << endl;

    return 0;
}
