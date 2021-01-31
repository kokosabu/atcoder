#include <iostream>
using namespace std;

int main()
{
    unsigned long long A, B, C;
    cin >> A >> B >> C;

    cout << (((A*(A+1)/2%998244353) * (B*(B+1)/2%998244353) % 998244353) * (C*(C+1)/2%998244353) % 998244353) << endl;

    return 0;
}
