#include <iostream>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y;
    cin >> k;

    if(k < y) {
        cout << x+k << endl;
    } else {
        cout << x+y-(k-y) << endl;
    }
    return 0;
}
