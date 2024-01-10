#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    if (X % 100 == 0 && X >= 100) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}