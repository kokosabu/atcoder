#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int D, N;
    cin >> D >> N;

    int base = pow(100, D);
    if(N == 100) {
        N = 101;
    }
    cout << base * N << endl;

    return 0;
}
