#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int count = 0;
    while((A%2) == 0 && (B%2) == 0 && (C%2) == 0) {
        if(A == B && B == C) {
            cout << -1 << endl;
            return 0;
        }

        count += 1;
        int tmpA = A / 2;
        int tmpB = B / 2;
        int tmpC = C / 2;

        A = tmpB + tmpC;
        B = tmpA + tmpC;
        C = tmpA + tmpB;
    }

    cout << count << endl;

    return 0;
}
