#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int c = B;
    while(c > 0) {
        int count = (B / c) - ((A-1) / c);
        if(count >= 2) {
            cout << c << endl;
            return 0;
        }
        c -= 1;
    }
    return -1;
}
