#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) {
        cout << 1 << endl;
    } else if(a != b && b != c && a != c) {
        cout << 3 << endl;
    } else {
        cout << 2 << endl;
    }
    return 0;
}
