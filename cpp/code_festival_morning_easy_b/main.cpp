#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(((n-1)/20)%2 == 0) {
        if((n%20) == 0) {
            cout << 20 << endl;
        } else {
            cout << n%20 << endl;
        }
    } else {
        if((n%20) == 0) {
            cout << 1 << endl;
        } else {
            cout << (21- (n%20)) << endl;
        }
    }

    return 0;
}
