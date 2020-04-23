#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if(A > (B*2)) {
        cout << A-(B*2) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
