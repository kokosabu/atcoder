#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int count = 0;
    int x = X;
    if(x >= Z) {
        x -= Z;
    }
    while(1) {
        if(x >= (Y+Z)) {
            x -= (Y+Z);
            count += 1;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
