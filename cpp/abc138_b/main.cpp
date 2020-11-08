#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;
    double sum = 0;
    for(int i = 0; i < N; i++) {
        double A;
        cin >> A;
        sum += 1.0 / A;
    }
    cout << std::setprecision(7) << (1.0 / sum) << endl;
    return 0;
}
