#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int N;
    unsigned long long mul;
    unsigned long long pre_mul;
    unsigned long long A;
    unsigned long long limit = pow(10, 18);
    bool over = false;
    bool zero = false;

    cin >> N;
    cin >> A;
    if(A == 0) {
        zero = true;
    }
    mul = A;
    for(int i = 1; i < N; i++) {
        pre_mul = mul;
        cin >> A;
        if(A == 0) {
            zero = true;
        }
        mul *= A;
        if(mul < pre_mul) {
            over = true;
        }
        if(mul > limit) {
            over = true;
        }
    }

    if(zero) {
        cout << 0 << endl;
    } else if(over) {
        cout << -1 << endl;
    } else {
        cout << mul << endl;
    }

    /*
    int N;
    long double mul;
    long double A;
    long double limit = pow(10, 18);

    cin >> N;
    cin >> A;
    mul = A;
    for(int i = 1; i < N; i++) {
        cin >> A;
        mul *= A;
    }
    if(mul > limit) {
        cout << -1 << endl;
    } else {
        cout << (unsigned long long)mul << endl;
    }
    */

    return 0;
}
