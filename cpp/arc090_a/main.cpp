#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[2][100] = {};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int max = 0;
    for(int i = 0; i < N; i++) {
        int count = 0;
        for(int j = 0; j <= i; j++) {
            count += A[0][j];
        }
        for(int j = i; j < N; j++) {
            count += A[1][j];
        }

        if(count > max) {
            max = count;
        }
    }

    cout << max << endl;

    return 0;
}
