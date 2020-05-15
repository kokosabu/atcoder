#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int count = 0;
    if(A > B) {
        cout << C/B << endl;
    } else {
        cout << C/A << endl;
    }
    return 0;
}
