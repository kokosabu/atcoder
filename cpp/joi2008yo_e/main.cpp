#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    int matrix[2][R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> matrix[0][i][j];
            matrix[1][i][j] = 1 - matrix[0][i][j];
        }
    }

    int bit = 1 << R;
    int max = 0;
    for(int i = 0; i < bit; i++) {
        int sum = 0;
        int r[R];
        for(int j = 0; j < R; j++) {
            if(((1 << j) & i) == 0) {
                r[j] = 0;
            } else {
                r[j] = 1;
            }
        }
        for(int k = 0; k < C; k++) {
            int tmp = 0;
            for(int l = 0; l < R; l++) {
                tmp += matrix[r[l]][l][k];
            }
            if(tmp > R/2) {
                sum += tmp;
            } else {
                sum += R - tmp;
            }
        }
        if(sum > max) {
            max = sum;
        }
    }
    cout << max << endl;;
    return 0;
}
