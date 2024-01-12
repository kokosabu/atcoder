#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double C = (A - B) / 3.0 + B;
    cout << fixed << setprecision(6) << C << endl;

    return 0;
}