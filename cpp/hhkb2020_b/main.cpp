#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    int m[H][W];
    for(int i = 0; i < H; i++) {
        string S;
        cin >> S;
        for(int j = 0; j < W; j++) {
            m[i][j] = S[j];
        }
    }
    int count = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(m[i][j] == '.') {
                if(i < (H-1)) {
                    if(m[i+1][j] == '.') {
                        count += 1;
                    }
                }
                if(j < (W-1)) {
                    if(m[i][j+1] == '.') {
                        count += 1;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
