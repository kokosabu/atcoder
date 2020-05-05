#include <iostream>
using namespace std;

int main()
{
    //(R+B)/2 = G
    //R+B = G*2
    //B = G*2-R
    int R, G;
    cin >> R >> G;
    cout << G*2-R << endl;
    return 0;
}
