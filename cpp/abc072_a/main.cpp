#include <iostream>
using namespace std;

int main()
{
    int X, t;
    cin >> X >> t;
    X -= t;
    if(X < 0) {
        cout << 0 << endl;
    } else {
        cout << X << endl;
    }
    return 0;
}
