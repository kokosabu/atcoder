#include <iostream>
using namespace std;

int main()
{
    unsigned long long X, Y;
    cin >> X >> Y;

    // if((Y%X) == 0 || (X%Y) == 0) {
    if((X%Y) == 0) {
        cout << -1 << endl;
    } else {
        cout << X << endl;
    }

    return 0;
}
