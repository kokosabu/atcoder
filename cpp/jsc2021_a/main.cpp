#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    double a = (double)Z * Y / X;
    int b = (int)a;
    if(a == b) {
        cout << b-1 << endl;
    } else {
        cout << b << endl;
    }

    return 0;
}
