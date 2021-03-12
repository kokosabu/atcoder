#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, V;
    cin >> A >> V;
    long long B, W;
    cin >> B >> W;
    long long T;
    cin >> T;

    long long diff = abs(A - B);

    if((V-W)*T >= diff) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
