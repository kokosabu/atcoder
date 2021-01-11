#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if(A == C) {
        if(D >= B) {
            cout << B-A << endl;
        } else {
            cout << D-C << endl;
        }
    } else if(A < C) {
        if(B < C) {
            cout << 0 << endl;
        } else if(B >= D) {
            cout << D-C << endl;
        } else {
            cout << B-C << endl;
        }
    } else {
        if(D < A) {
            cout << 0 << endl;
        } else if(D >= B) {
            cout << B-A << endl;
        } else {
            cout << D-A << endl;
        }
    }
    return 0;
}
