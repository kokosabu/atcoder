#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int D, N;
    cin >> D >> N;

    vector<int> T(D);
    for(int i = 0; i < D; i++) {
        cin >> T[i];
    }

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i];
    }

    vector<vector<int> > dp(D, vector<int>(N, 0));
    for(int i = 1; i < D; i++) {
        for(int j = 0; j < N; j++) {
            if(A[j] <= T[i] && T[i] <= B[j]) {
                for(int k = 0; k < N; k++) {
                    if(A[k] <= T[i-1] && T[i-1] <= B[k]) {
                        if(abs(C[k]-C[j])+dp[i-1][k] > dp[i][j]) {
                            dp[i][j] = abs(C[k]-C[j]) + dp[i-1][k];
                        }
                    }
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    cout << *max_element(dp[D-1].begin(), dp[D-1].end()) << endl;

    return 0;
}
