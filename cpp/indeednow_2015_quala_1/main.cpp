#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int a_count = 0;
    while(A != 0) {
        a_count += 1;
        A /= 10;
    }

    int b_count = 0;
    while(B != 0) {
        b_count += 1;
        B /= 10;
    }

    cout << a_count * b_count << endl;

    return 0;
}
