#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if((2*x) <= y) {
        if(b < a) {
          cout << (a-b-1) * 2*x + x << endl;
        } else {
          cout << (b-a)   * 2*x + x << endl;
        }
    } else {
        if(b < a) {
            cout << (a-b-1) * y + x << endl;
        } else {
            cout << (b-a)   * y + x << endl;
        }
    }

#if 0
    if(a > b) {
		cout << min((a-b-1) * y, (a-b-1) * 2 * x) + x << endl;
    } else {
        cout << (b-a) * min(y, 2*x) + x << endl;
    }
#endif

    return 0;
}
