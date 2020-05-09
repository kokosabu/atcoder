#include <iostream>
#include <string>
using namespace std;

int main()
{
    int H, W;
    string S;
    cin >> H >> W;
    int h, w;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> S;
            if(S == "snuke") {
                h = i;
                w = j;
            }
        }
    }

    cout << (char)('A' + w) << h+1 << endl;
    //cout << h << w << endl;

    return 0;
}
