#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    unsigned long long a3 = 1;
    for(int a = 1; a <= 37; a++) {
        a3 *= 3;
        unsigned long long b5 = 1;
        for(int b = 1; b <= 25; b++) {
            b5 *= 5;
            if(a3+b5 == N) {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
