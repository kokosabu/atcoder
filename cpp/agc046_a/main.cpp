#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int a = 360;
    while((a%X) != 0) {
        a += 360;
    }
    cout << a/X << endl;
    return 0;
}
