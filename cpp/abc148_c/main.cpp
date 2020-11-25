#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

int main()
{
    long long A, B;
    cin >> A >> B;

    cout << A*B/gcd(A,B) << endl;

    return 0;
}
