#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X;
    cin >> X;
    while(1) {
        int s = (int)(sqrt(X) + 0.5);
        int i;
        for(i = 2; i <= s; i++) {
            if((X%i) == 0) {
                break;
            }
        }
        if(i > s) {
            break;
        }
        X += 1;
    };

    cout << X << endl;

    return 0;
}
