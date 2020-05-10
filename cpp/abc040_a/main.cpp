#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    if((n-x) <= (x-1)) {
        cout << (n-x) << endl;
    } else {
        cout << (x-1) << endl;
    }

    return 0;
}
