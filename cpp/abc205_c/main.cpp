#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if(A <= 0 && B <= 0 && (C%2) == 1) {
        if(A < B) {
            cout << "<" << endl;
        } else if(A > B) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    } else if(A < 0 && B > 0 && (C%2) == 1) {
        cout << "<" << endl;
    } else if(A > 0 && B < 0 && (C%2) == 1) {
        cout << ">" << endl;
    } else {
        if(abs(A) < abs(B)) {
            cout << "<" << endl;
        } else if(abs(A) > abs(B)) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }

    return 0;
}
