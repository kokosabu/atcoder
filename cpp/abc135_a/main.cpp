#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if((abs(A+B)%2) == 0) {
        cout << abs(A+B)/2 << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
