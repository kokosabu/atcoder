#include <iostream>
using namespace std;

int main()
{
    int A[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> A[i][j];
        }
    }
    bool is_continue = false;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(A[i][j] == A[i+1][j]) {
                is_continue = true;
            }
            if(j != 3) {
                if(A[i][j] == A[i][j+1]) {
                    is_continue = true;
                }
            }
        }
    }
    if(is_continue) {
        cout << "CONTINUE" << endl;
    } else {
        cout << "GAMEOVER" << endl;
    }
    return 0;
}
