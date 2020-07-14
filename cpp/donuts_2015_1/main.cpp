#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double R, D;
    cin >> R >> D;
    cout << fixed << setprecision(6) << (R*R*M_PI)*(D*2*M_PI) << endl;
    return 0;
}
