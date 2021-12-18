#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(K);
    vector<int> B(K);
    for(int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        B[i] -= 1;
    }

    vector<vector<int> > dp(N+1, vector<int>(9, 0));
    dp[0][0] = 1;
    for(int i = 1; i <= N; i++) {
        int b = -1;
        for(int j = 0; j < K; j++) {
            if(A[j] == i) {
                b = B[j];
                break;
            }
        }


        // 0 : 0 0 : from  3, 6 select 0
        // 1 : 0 1
        // 2 : 0 2
        // 3 : 1 0 : from 1, 4, 7
        // 4 : 1 1 : from 1,    7
        // 5 : 1 2
        // 6 : 2 0
        // 7 : 2 1
        // 8 : 2 2 : from 2, 5, 
        // cout << "b : " << b << endl;
        if(i == 1) {
            // 0, 1, 2に入れる
            for(int j = 0; j < 3; j++) {
                if(b == -1) {
                    dp[i][j] = 1;
                } else if(j%3 == b) {
                    dp[i][j] = 1;
                }
            }
        } else if(i == 2) {
            for(int j = 0; j < 9; j++) {
                if(b != -1 && j%3 != b) {
                    continue;
                }
                for(int k = j/3; k < 9; k += 3) {
                    dp[i][j] += dp[i-1][k];
                }
            }
        } else {
            for(int j = 0; j < 9; j++) {
                if(b != -1 && j%3 != b) {
                    continue;
                }
                for(int k = j/3; k < 9; k += 3) {
                    if(j != k) {
                        dp[i][j] += dp[i-1][k];
                    }
                }
            }
        }

        for(int j = 0; j < 9; j++) {
            dp[i][j] %= 10000;
        }

        /*
        cout << "---- " << i << " ---" << endl;
        for(int j = 1; j <= i; j++) {
            for(int k = 0; k < 9; k++) {
                cout << dp[j][k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
        */
    }

    int sum = 0;
    for(int i = 0; i < 9; i++) {
        sum = (sum + dp[N][i]) % 10000;
    }

    cout << sum << endl;
}
