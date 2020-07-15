#include <iostream>
using namespace std;

int main()
{
    double Height, BMI;

    cin >> Height >> BMI;

    Height /= 100;
    cout << BMI * (Height*Height) << endl;

    return 0;
}
