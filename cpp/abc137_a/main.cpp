#include <iostream>
using namespace std;

int main()
{
    int A, B;
    int add, sub, mul;
    cin >> A >> B;
    add = A + B;
    sub = A - B;
    mul = A * B;
    if(add >= sub && add >= mul) {
        cout << add << endl;
    } else if(sub >= add && sub >= mul) {
        cout << sub << endl;
    } else if(mul >= add && mul >= sub) {
        cout << mul << endl;
    }
    return 0;
}
