#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    int CA[N][M+1];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M+1; j++) {
            cin >> CA[i][j];
        }
    }
    int bit = 1 << N;
    int min = INT_MAX;
    for(int i = 0; i < bit; i++) {
        int A[M];
        for(int j = 0; j < M; j++) {
            A[j] = 0;
        }
        int sum = 0;
        for(int j = 0; j < N; j++) {
            if((i & (1<<j)) != 0) {
                sum += CA[j][0];
                for(int k = 0; k < M; k++) {
                    A[k] += CA[j][k+1];
                }
            }
        }
        bool success = true;
        for(int j = 0; j < M; j++) {
            if(A[j] < X) {
                success = false;
                break;
            }
        }
        if(success && sum < min) {
            min = sum;
        }
    }
    if(min == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min << endl;
    }
    return 0;
}
