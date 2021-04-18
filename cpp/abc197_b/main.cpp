#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    vector<string> squares(H);
    for(int i = 0; i < H; i++) {
        cin >> squares[i];
    }

    int count = 0;
    if(squares[X-1][Y-1] == '.') {
        count += 1;
        for(int x = X-2; x >= 0; x--) {
            if(squares[x][Y-1] == '#') {
                break;
            }
            count += 1;
        }
        for(int x = X; x < H; x++) {
            if(squares[x][Y-1] == '#') {
                break;
            }
            count += 1;
        }
        for(int y = Y-2; y >= 0; y--) {
            if(squares[X-1][y] == '#') {
                break;
            }
            count += 1;
        }
        for(int y = Y; y < W; y++) {
            if(squares[X-1][y] == '#') {
                break;
            }
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
