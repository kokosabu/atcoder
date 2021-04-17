#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int a = X / 100;
    int b = X % 100;
    if(b <= (a*5)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
