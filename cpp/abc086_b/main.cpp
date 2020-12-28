#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int num = stoi(a+b);

    int num2 = sqrt(num);
    if(num2*num2 == num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
