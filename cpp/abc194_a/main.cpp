#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int out;
    if((A+B) >= 15 && B >= 8) {
        out = 1;
    } else if((A+B) >= 10 && B >= 3) {
        out = 2;
    } else if((A+B) >= 3) {
        out = 3;
    } else {
        out = 4;
    }

    cout << out << endl;

    return 0;
}
