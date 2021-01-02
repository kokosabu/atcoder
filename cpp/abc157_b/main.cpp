#include <iostream>
using namespace std;

int main()
{
    int A[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int b;
        cin >> b;
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(b == A[j][k]) {
                    A[j][k] = -1;
                }
            }
        }
    }

    bool is_bingo = false;
    for(int i = 0; i < 3; i++) {
        if(A[i][0] == -1 && A[i][1] == -1 && A[i][2] == -1) {
            is_bingo = true;
        }
        if(A[0][i] == -1 && A[1][i] == -1 && A[2][i] == -1) {
            is_bingo = true;
        }
    }
    if(A[0][0] == -1 && A[1][1] == -1 && A[2][2] == -1) {
        is_bingo = true;
    }
    if(A[0][2] == -1 && A[1][1] == -1 && A[2][0] == -1) {
        is_bingo = true;
    }

    if(is_bingo) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
