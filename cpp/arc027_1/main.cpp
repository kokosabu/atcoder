#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    cout << (18*60) - (h*60 + m) << endl;
    return 0;
}
