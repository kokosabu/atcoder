#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, va, vb, L;
    cin >> N >> va >> vb >> L;

    double l = L;
    for(int i = 0; i < N; i++) {
        double a_time = l / va;
        l = vb * a_time;
    }
    cout << fixed << setprecision(8) << l << endl;
    return 0;
}
