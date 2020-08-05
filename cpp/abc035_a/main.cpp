#include <iostream>
using namespace std;

int main()
{
    int W, H;
    cin >> W >> H;
    if( (H % (W/4)) == 0 ) {
        cout << "4:3" << endl;
    } else {
        cout << "16:9" << endl;
    }
    return 0;
}
