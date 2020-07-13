#include <iostream>
using namespace std;

int main()
{
    int L, R, d;
    cin >> L >> R >> d;
    if((R%d) == 0) {
        cout << (R-L)/d+1 << endl;
    } else {
        cout << (R-L)/d << endl;
    }
    return 0;
}
