#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x_diff = x2 - x1;
    int y_diff = y2 - y1;

    cout << x2-y_diff << " " << y2+x_diff << " " << x1-y_diff << " " << y1+x_diff << endl;
    return 0;
}
