#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    cout << fixed << setprecision(10) <<Sx + (Gx-Sx) / (Sy + Gy) * Sy << endl;
    return 0;
}
