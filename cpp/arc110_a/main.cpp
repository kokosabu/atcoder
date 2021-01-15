#include <iostream>
using namespace std;

unsigned long long gcd(unsigned long long x, unsigned long long y)
{
    if(x < y) {
        unsigned long long tmp = x;
        x = y;
        y = tmp;
    }
    unsigned long long r = x % y;
    if(r == 0) {
        return y;
    } else {
        return gcd(y, r);
    }
}

int main()
{
    int N;
    cin >> N;

    unsigned long long ans = 1;
    for(int i = 2; i <= N; i++) {
        ans = ans*i / gcd(ans, i);
    }
    ans += 1;

    cout << ans << endl;

    return 0;
}
