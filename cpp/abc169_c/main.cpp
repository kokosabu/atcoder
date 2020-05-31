#include <iostream>
using namespace std;

int main()
{
    /*
    unsigned long long A;
    long double B;
    cin >> A >> B;
    
    unsigned long long C = B * 100;
    unsigned long long ans = A * C / 100;
    */
    long double A;
    long double B;
    cin >> A >> B;
    unsigned long long ans = A * B;
    cout << ans << endl;
    return 0;
}
