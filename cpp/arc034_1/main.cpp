#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double max = 0.0;
    for(int i = 0; i < N; i++) {
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double sum = a + b + c + d + (e * 110 / 900);
        if(sum > max) {
            max = sum;
        }
    }

    cout << fixed << setprecision(15) << max << endl;

    return 0;
}
