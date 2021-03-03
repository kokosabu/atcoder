#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;

    int base = 1;
    while(1) {
        int base3 = base * base * base;

        if(base3 > A) {
            cout << "NO" << endl;
            break;
        } else if(base3 == A) {
            cout << "YES" << endl;
            break;
        }

        base += 1;
    }

    return 0;
}
