#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double P;
    cin >> P;

    long double left = 0;
    long double right = P;

    long double max = P;
    //while((right-left) < 0.000000001) {
    long double before = P;
    //for(int i = 0; i < 1000; i++) {
    while((right-left) > 0.000000000000001) {
        long double mid = (left + right) / 2;

        long double x1 = (left * 2 + right) / 3;
        long double x2 = (left + right * 2) / 3;
        long double time1 = x1 + pow(2.0, -x1/1.5)*P;
        long double time2 = mid + pow(2.0, -mid/1.5)*P;
        long double time3 = x2 + pow(2.0, -x2/1.5)*P;
        //long double time1 = left + pow(2.0, -left/1.5)*P;
        //long double time2 = mid + pow(2.0, -mid/1.5)*P;
        //long double time3 = right + pow(2.0, -right/1.5)*P;
        //long double time = mid + P / powl(2.0, mid/1.5);

        //cout << time1 << ", " << time3 << endl;
        if(time1 < time3) {
            right = x2;
        } else {
            left = x1;
        }
        //if(time > before) {
        //if(time < max) {
        //    max = time;
        //    left = mid;
        //} else {
        //    right = mid;
        //}
        //before = time;

        //cout << left << ", " << right << "," << time2 << endl;
        max = time2;
    }

    cout << std::fixed << std::setprecision(12) << max << endl;

    return 0;
}
