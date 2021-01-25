#include <iostream>
using namespace std;

long long calc(long long X)
{
    if(X == 1) {
        return 1;
    } else {
        return calc(X/2) * 2 + 1;
    }
}

int main()
{
    long long H;
    cin >> H;
    cout << calc(H) << endl;
    return 0;
}
