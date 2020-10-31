#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int x_group, y_group;

    if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
        x_group = 1;
    } else if(x == 4 || x == 6 || x == 9 || x == 11) {
        x_group = 2;
    } else {
        x_group = 3;
    }

    if(y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) {
        y_group = 1;
    } else if(y == 4 || y == 6 || y == 9 || y == 11) {
        y_group = 2;
    } else {
        y_group = 3;
    }

    if(x_group == y_group) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
