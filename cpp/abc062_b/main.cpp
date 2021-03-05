#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    for(int i = 0; i < W+2; i++) {
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < H; i++) {
        string a;
        cin >> a;

        cout << "#";
        cout << a;
        cout << "#" << endl;
    }

    for(int i = 0; i < W+2; i++) {
        cout << "#";
    }
    cout << endl;

    return 0;
}
