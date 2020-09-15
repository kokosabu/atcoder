#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long max = a * c;
    if((a*d) > max) {
        max = a * d;
    }
    if((b*c) > max) {
        max = b * c;
    }
    if((b*d) > max) {
        max = b * d;
    }
    cout << max << endl;
    return 0;
}
