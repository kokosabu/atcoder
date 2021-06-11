#include <iostream>
using namespace std;

int gcd(int m, int n)
{
    if(n == 0) {
        return m;
    } else  {
        return gcd(n, m%n);
    }
}

int main()
{
    int N;
    cin >> N;
    int a;
    cin >> a;
    for(int i = 1; i < N; i++) {
        int b;
        cin >> b;
        if(a > b) {
            a = gcd(a, b);
        } else {
            a = gcd(b, a);
        }
    }
    cout << a << endl;
    return 0;
}
