#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int square[10][10];

    for(int i = 0; i < H; i++) {
        string S;
        cin >> S;
        for(int j = 0; j < W; j++) {
            if(S[j] == '.') {
                square[i][j] = 0;
            } else {
                square[i][j] = 1;
            }
        }
    }

    int corner = 0;
    for(int i = 1; i < H-1; i++) {
        for(int j = 1; j < W-1; j++) {
            if(square[i][j] == 1) {
                if(square[i-1][j-1] == 1 && square[i+1][j+1] == 1) {
                    continue;
                } else if(square[i-1][j] == 1 && square[i+1][j] == 1) {
                    continue;
                } else if(square[i][j-1] == 1 && square[i][j+1] == 1) {
                    continue;
                } else if(square[i-1][j+1] == 1 && square[i+1][j-1] == 1) {
                    continue;
                }
                corner += 1;
            }
        }
    }

    cout << corner << endl;

    return 0;
}
