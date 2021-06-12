#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++) {
        cin >> S[i];
    }

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(S[i][j] == '#') {
                continue;
            }
            int count = 0;
            for(int k = -1; k <= 1; k++) {
                if((i+k) < 0 || (i+k) >= H) {
                    continue;
                }
                for(int l = -1; l <= 1; l++) {
                    if((j+l) < 0 || (j+l) >= W) {
                        continue;
                    }
                    if(S[i+k][j+l] == '#') {
                        count += 1;
                    }
                }
            }
            S[i][j] = '0' + count;
        }
    }

    for(int i = 0; i < H; i++) {
        cout << S[i] << endl;;
    }

    return 0;
}
