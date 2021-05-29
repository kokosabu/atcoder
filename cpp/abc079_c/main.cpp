#include <iostream>
using namespace std;

int main()
{
    int ABCD;
    cin >> ABCD;

    int A, B, C, D;
    A = ABCD / 1000;
    B = (ABCD % 1000) / 100;
    C = (ABCD % 100) / 10;
    D = (ABCD % 10);

    int X;

    X = A + B + C + D;
    if(X == 7) {
        cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }
    X = A + B + C - D;
    if(X == 7) {
        cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }
    X = A + B - C + D;
    if(X == 7) {
        cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }
    X = A + B - C - D;
    if(X == 7) {
        cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }
    X = A - B + C + D;
    if(X == 7) {
        cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }
    X = A - B + C - D;
    if(X == 7) {
        cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }
    X = A - B - C + D;
    if(X == 7) {
        cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }
    X = A - B - C - D;
    if(X == 7) {
        cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }

    return 0;
}
